#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main()
{
	deque<int> dq = { 4, 5, 3 };
	
	dq.push_back(8);
	for (int i = 0; i < dq.size(); i++)
	{
		cout << dq[i] << endl;
	}
}
