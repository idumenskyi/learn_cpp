#include <iostream>
#include <string>
using namespace std;
    class Pixel
    {
    public:
        Pixel()
        {
            r = g = b = 0;
        }
        Pixel(int r, int g, int b)
        {
            this->r = r;
            this->g = g;
            this->b = b;
        }
        string GetInfo()
        {
            return " Pixel: r = " + to_string(r) + " g = " + to_string(g) + " b = " + to_string(b);
        }
        int r;
    private:

        int g;
        int b;
    };

    static const int LENGTH = 5;
    Pixel pixels[LENGTH]
    {
        Pixel(0, 4, 64),
        Pixel(4, 14, 10),
        Pixel(111, 4, 24),
        Pixel(244, 244, 14),
        Pixel(111, 179, 64)
    };
int main()
{
    //const int LENGTH = 5;
    //Pixel arr[LENGTH];
    //arr[0] = Pixel(11, 18, 244);
    int LENGTH = 5;
    Pixel *arr = new Pixel[LENGTH];
    arr[0] = Pixel(11, 151, 44);
    cout << arr[0].GetInfo() << endl;
    delete []arr;

    return 0;
}
