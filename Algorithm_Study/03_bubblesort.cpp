#include <iostream>
#include <deque>
using namespace std;

deque<int> bubblesort(deque<int> dq)
{
	int temp;
	for (int i = 0; i < dq.size() - 1; ++i)
	{
		for (int j = 0; j < dq.size() - 1; ++j)
		{
			if (dq[j + 1] < dq[j])
			{
				temp = dq[j + 1];
				dq[j + 1] = dq[j];
				dq[j] = temp;
			}
		}
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
	dq = bubblesort(dq);
	for (int i = 0; i < dq.size(); ++i) cout << dq[i] << " ";
	return 0;
}