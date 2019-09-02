#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string path = "myFile.txt";
    ofstream fout;
    fout.open(path, ofstream::app);//ofstream::app - add new data in end of file instead rewrite
    if(!fout.is_open())
    {
        cout << "error to open file" << endl;
    }
    else
    {
        cout << "Enter the data" << endl;
        int data;
        cin >> data;
        fout << data;
        fout << "\n";
    }
    fout.close();
    return 0;
}
