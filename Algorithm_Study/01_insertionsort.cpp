#include <iostream>
using namespace std;

int* insertionsort(int* arr, int len)
{
	int temp, j;
	for (int i = 1; i < len; ++i)
	{
		temp = arr[i];
		for (j = i - 1; j >= 0 && temp <= arr[j]; --j)
		{
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = temp;
	}
	return arr;
}

int main()
{
	int arr[6] = { 5, 6, 1, 2, 4, 3 };
	int len = 6;
	insertionsort(arr, len);
	for (int i = 0; i < len; ++i) cout << arr[i] << " ";
	return 0;
}