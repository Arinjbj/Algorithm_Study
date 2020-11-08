#include <iostream>
#include <deque>
using namespace std;

deque<int> selectionsort(deque<int> dq)
{
	int min, loc;
	for (int i = 0; i < dq.size(); ++i)
	{
		min = dq[i];
		loc = i;
		for (int j = i + 1; j < dq.size(); ++j)
		{
			if (dq[j] < min)
			{
				min = dq[j];
				loc = j;
			}
		}
		dq[loc] = dq[i];
		dq[i] = min;
	}
	return dq;
}

int main()
{
	deque<int> dq;
	dq.push_back(5);
	dq.push_back(1);
	dq.push_back(7);
	dq.push_back(4);
	dq.push_back(6);
	dq.push_back(3);
	dq.push_back(2);
	dq.push_back(8);
	dq = selectionsort(dq);
	for (int i = 0; i < dq.size(); ++i) cout << dq[i] << " ";
	return 0;
}