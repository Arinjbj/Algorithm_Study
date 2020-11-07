#include <iostream>
#include <vector>
using namespace std;

vector<int> mergesort(vector<int> v);
vector<int> merge(vector<int> left, vector<int> right);

int main()
{
	vector<int> v;
	v.push_back(5);
	v.push_back(2);
	v.push_back(4);
	v.push_back(7);
	v.push_back(6);
	v.push_back(1);
	v.push_back(3);
	v.push_back(8);
	v = mergesort(v);
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	return 0;
}

vector<int> mergesort(vector<int> v)
{
	if (v.size() == 1) return v;
	int len = v.size();
	vector<int> right;
	for (int i = len / 2; i != 0; --i)
	{
		right.push_back(v.back());
		v.pop_back();
	}
	return merge(mergesort(v), mergesort(right));
}

vector<int> merge(vector<int> left, vector<int> right)
{
	vector<int> result;
	vector<int>::iterator iter;
	while (left.size() && right.size())
	{
		if (left.front() <= right.front())
		{
			result.push_back(left.front());
			iter = left.begin();
			left.erase(iter);
		}
		else
		{
			result.push_back(right.front());
			iter = right.begin();
			right.erase(iter);
		}
	}
	while (left.size())
	{
		result.push_back(left.front());
		iter = left.begin();
		left.erase(iter);
	}
	while (right.size())
	{
		result.push_back(right.front());
		iter = right.begin();
		right.erase(iter);
	}
	return result;
}