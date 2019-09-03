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
private:
    int x;
    int y;
    int z;
    friend ostream& operator<<(ostream& os, const Point& point);
    friend istream& operator>>(istream& is, Point& point);
};
ostream& operator<<(ostream& os, const Point& point)
{
    os << point.x <<  " " << point.y << " " << point.z;
    return os;
}
istream& operator>>(istream& is, Point& point)
{
    is >> point.x >> point.y >> point.z;
    return is;
}
int main()
{
    string path = "myFile.txt";
    Point point(543, 890, 567);
    //cout << point;

    fstream fs;
    fs.open(path, fstream::in | fstream::out | fstream::app); // fstream::in - read mode | fstream::out - write mode | fstream::app - add new data in end of file
    if(!fs.is_open())
    {
        cout << "error to open file" << endl;
    }
    else
    {

        cout << "file is open" << endl;
        //fs << point << "\n";
        while(true)
        {
            Point p;
            fs >> p;
            if(fs.eof())
            {
                break;
            }
            cout << p << endl;
        }
    }
    fs.close();

    return 0;
}
