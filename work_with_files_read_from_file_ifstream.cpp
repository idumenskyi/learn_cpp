#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string path = "myFile.txt";
    ifstream fin;
    fin.open(path);
    if(!fin.is_open())
    {
        cout << "error to open file" << endl;
    }
    else
    {
        cout << "file is open" << endl;
        //char ch;
        string str;
        /*while(fin.get(ch)) //read file by character
        {
            cout << ch;
        }*/
        /*while(!fin.eof())
        {
           str = ""; // clear old value
           fin >> str; //read file by whitespace
           cout << str << endl;
        }*/
        while(!fin.eof())
        {
           str = ""; // clear old value
           getline(fin, str); // here fin - source from read, str - source to save, read file by string
           cout << str << endl;
        }
    }
    fin.close();
    return 0;
}
