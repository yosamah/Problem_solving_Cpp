#include <iostream>
using namespace std;


int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		arr[i] *= 567;
		arr[i] /= 9;
		arr[i] += 7492;
		arr[i] *= 235;
		arr[i] /= 47;
		arr[i] -= 498;

	}
	for (int j = 0; j < n; j++)
	{
		arr[j] = (arr[j] / 10) % 10;
		cout << abs(arr[j]) << endl;
	}



	return 0;
}