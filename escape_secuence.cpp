#include <iostream>
using namespace std;

/*
\b deleting last inputting char
\n move up on next line
\t move up to next position of tabulation
\\ outputting backslash
\" outputting double quote
\' outputting single quote

*/

int main()
{
	setlocale(LC_ALL, "Us");
	cout << "Hello!"<<endl;
	cout << "Hello!\n";
	cout << "Hello!\b";
	cout << "Hello!\t";
	cout << "Hello!\\";
	cout << "Hello!\"";
	cout << "Hello!\'";
	return 0;
}
