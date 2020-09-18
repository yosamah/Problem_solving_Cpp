#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int** arr = new int*[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[10];
		for (int j = 0; j < 10; j++)
		{
			cin >> arr[i][j];
		}
	}
	bool* x = new bool[n];
	for (int i = 0; i < n; i++)
	{
		bool y = false;
		x[i] = false;
		for (int j = 0; j < 10-1; j++)
		{			
			if (arr[i][j] >= arr[i][j + 1])
				continue;				
			else
			{
				y = true;
				break;
			}				
		}
		bool z = false;
		for (int j = 0; j < 10 - 1; j++)
		{
			if (arr[i][j] <= arr[i][j + 1])
				continue;
			else
			{
				z = true;
				break;
			}
		}
		if (y && z)
			x[i] = true;
	}
	cout << "Lumberjacks:" << endl;
	for (int i = 0; i < n; i++)
	{
		if (x[i])
			cout << "Unordered" <<endl;
		else
			cout << "Ordered" <<endl;
	}
	return 0;
}