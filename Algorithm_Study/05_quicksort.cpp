#include <iostream>
#include <vector>
using namespace std;

void quicksort(vector<int>& v, int left, int right);
int partition(vector<int>& v, int left, int right, int pi);

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
	if (left >= right) return;
	int pi = right;
	pi = partition(v, left, right - 1, pi);
	quicksort(v, left, pi - 1);
	quicksort(v, pi + 1, right);
}

int partition(vector<int>& v, int left, int right, int pi)
{
	int pivalue = v[pi];
	while (left < right)
	{
		if (v[left] <= pivalue)
		{
			++left;
		}
		if (left == right) break;
		if (v[right] >= pivalue)
		{
			--right;
		}
		if (left == right) break;
		if (v[left] > pivalue && v[right] < pivalue)
		{
			swap(v[left], v[right]);
		}
	}
	if(v[left] < pivalue) ++left;
	swap(v[left], v[pi]);
	return left;
}
