#include <iostream>
#include "multi_file_sum.h"
#include "multi_file_myClass.h"
using namespace std;


int main()
{
	/*
	int result = sum(5, 7);
	cout << result << endl;
	*/
	myNamespace::myClass m;
	m.printMessage("Some Text");
}
