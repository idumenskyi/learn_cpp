#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
	forward_list <int> fl = {7, 9, 3};
	fl.push_front(1);
	fl.push_front(4);
	forward_list<int> ::iterator it = fl.begin();
	//it++;
	//fl.insert_after(it, 100);
	fl.erase_after(it);
	//cout << *it << endl;
	
	
	for (auto item : fl)
	{
		cout << item << endl;
	}
	
}
