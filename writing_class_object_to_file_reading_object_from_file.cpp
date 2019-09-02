#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Point
{
public:
    Point()
    {
        x = y = z = 0;
    }
    Point(int x, int y, int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    void Print()
    {
        cout << "x = " << x << " Y = " << y << " Z = " << z << endl;
    }

    int x;
    int y;
    int z;
};
int main()
{
    string path = "myFile.txt";
    Point point(5, 8, 4);
    point.Print();
    /*
    ofstream fout;
    fout.open(path, ofstream::app);//ofstream::app - add new data in end of file instead rewrite
    if(!fout.is_open())
    {
        cout << "error to open file" << endl;
    }
    else
    {
        cout << "file is open" << endl;
        fout.write((char*)&point, sizeof(Point));
    }
    fout.close();
    */
    ifstream fin;
    fin.open(path);
    if(!fin.is_open())
    {
        cout << "error to open file" << endl;
    }
    else
    {
        cout << "file is open" << endl;
        Point pnt;
        while(fin.read((char*)&pnt, sizeof(Point)))
        {
            pnt.Print();
        }

    }
    fin.close();
    return 0;
}
