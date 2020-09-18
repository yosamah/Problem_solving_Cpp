#include <iostream>
using namespace std;


char checkBigger(int x, int y);


int main()
{
	int n;
	cin >> n;
	int* arr1 = new int[n];
	int* arr2 = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i] >> arr2[i];
	}
	char* arr3 = new char[n];
	for (int i = 0; i < n; i++)
	{
		arr3[i] = checkBigger(arr1[i], arr2[i]);
		cout << arr3[i] << endl;
	}
	return 0;
}


char checkBigger(int x, int y)
{
	if (x > y)
		return '>';
	else if (x < y)
		return '<';
	else
		return '=';
}