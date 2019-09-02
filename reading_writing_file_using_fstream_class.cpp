#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string path = "myFile.txt";
    fstream fs;
    fs.open(path, fstream::in | fstream::out | fstream::app); // fstream::in - read mode | fstream::out - write mode | fstream::app - add new data in end of file
    if(!fs.is_open())
    {
        cout << "error to open file" << endl;
    }
    else
    {
        string msg;
        int value;
        cout << "file is open" << endl;
        cout << "Press 1 for write message to file" << endl;
        cout << "Press 2 for read messages from file" << endl;
        cin >> value;
        if (value == 1)
        {
            cout << "Enter your message" << endl;
            cin >> msg;
            fs << msg << "\n";
        }
        if (value == 2)
        {
            while(!fs.eof())
            {
                msg = "";
                fs >> msg;
                cout << msg << endl;
            }
        }


    }
    fs.close();
    return 0;
}
