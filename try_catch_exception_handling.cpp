#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string path = "myFile.txt";
    ifstream fin;
    fin.exceptions(ifstream::badbit | ifstream::failbit);
    try
    {
        cout << "attempt to open file" << endl;
        fin.open(path);
        cout << "file opened succssfully" << endl;

    }
    //catch(const std::exception & ex)
    catch(const ifstream::failure & ex)
    {
        cout << ex.what() << endl;
        cout << ex.code () << endl;
        cout << "error to open file" << endl;
    }
    return 0;
}
