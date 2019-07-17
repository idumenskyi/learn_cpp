#include <iostream>
//#define DEBUG
#define DEBUG 5
using namespace std;

int main()
{
/*
#ifdef DEBUG
    cout << "Begin of loop" << endl;
#endif//DEBUG
    for(int i = 0; i < 4; i++)
    {
        cout << i << endl;
    }
#ifdef DEBUG
    cout << "End of loop" << endl;
#endif//DEBUG
*/
#ifdef DEBUG
    cout << "Debug defined" << endl;
#else
    cout << "Debug not defined" << endl;
#endif//DEBUG
#ifndef DEBUG //output cout 2
    cout << "cout 1" << endl;
#else
    cout << "cout 2" << endl;
#endif//DEBUG
#if DEBUG < 4
    cout << "Debug defined" << endl;
#elif DEBUG == 5
    cout << "Debug not defined" << endl;
#endif//DEBUG

    return 0;
}
