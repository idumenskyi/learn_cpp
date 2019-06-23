#include <iostream>
using namespace std;
void somefunc(){
    cout << "Hi, i'm somefunc!" << endl;
    //return;
}
int sum(int num1, int num2){
    //int result;
    //result = num1 + num2;
    //return result;
    return num1 + num2;
}
int main()
{
    int s;
    int a = 11;
    int b = 17;
    somefunc();
    //s = sum(11, 17);
    //s = sum(a, b);
    //cout << s << endl;
    cout << sum(a, b) << endl;
    return 0;
}
