#include <iostream>
#include <vector>
using namespace std;

void quicksort(vector<int>& v, int left, int right);
int partition(vector<int>& v, int left, int right);

int main()
{
	vector<int> v;
	v.push_back(5);
	v.push_back(1);
	v.push_back(7);
	v.push_back(4);
	v.push_back(6);
	v.push_back(3);
	v.push_back(2);
	v.push_back(8);
	quicksort(v, 0, v.size() - 1);
	for (int i = 0; i < v.size(); ++i) cout << v[i] << " ";
	return 0;
}

void quicksort(vector<int>& v, int left, int right)
{
	if (left < right)
	{
		int pivot = partition(v, left, right);

		quicksort(v, left, pivot - 1);
		quicksort(v, pivot + 1, right);
	}
}

int partition(vector<int>& v, int left, int right)
{
	int pivalue = v[right];
	int i = left - 1;
	for (int j = left; j <= right - 1; ++j)
	{
		if (v[j] <= pivalue)
		{
			++i;
			swap(v[i], v[j]);
		}
	}
	swap(v[i + 1], v[right]);
	return i + 1;
}
