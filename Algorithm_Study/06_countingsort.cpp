#include <iostream>
#include <vector>
using namespace std;

vector<int> countingsort(vector<int>& v, const int max)
{
	vector<int> cnt(max + 1), result;
	int size = v.size(), j = 0;
	for (int i = 0; i < size; ++i)
	{
		++cnt[v[i]];
	}
	for (int i = 0; i <= max; ++i)
	{
		while (cnt[i] != 0)
		{
			result.push_back(i);
			--cnt[i];
		}
	}
	return result;
}

int main()
{
	vector<int> v;
	v.push_back(3);
	v.push_back(4);
	v.push_back(0);
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(2);
	v.push_back(4);
	v = countingsort(v, 4);
	for (int i = 0; i < v.size(); ++i) cout << v[i] << " ";
	return 0;
}