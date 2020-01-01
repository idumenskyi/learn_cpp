#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void DoWork()
{
	for (size_t i = 0; i < 10; i++)
	{
		cout << "ID thread = " << this_thread::get_id() << "\tDoWork\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(1000));

	}
}

int main()
{
	thread th(DoWork);
	thread th1(DoWork);
	//th.detach();
	
	for (size_t i = 0; i < 10; i++)
	{
		cout << "ID thread = " << this_thread::get_id() << "\tmain\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(500));

	}
	th.join();
	th1.join();
	
}
