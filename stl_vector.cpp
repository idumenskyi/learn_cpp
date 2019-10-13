#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //vector<int> myVector = {2, 7, 64, 16};
    //vector<int> myVector(30, 8);
    vector<int> myVector;
    /*
    myVector.reserve(100);
    myVector.push_back(4);
    myVector.push_back(64);
    myVector.push_back(16);
    */

    cout << "Amount of items in vector = " << myVector.size() << endl;
    cout << "Capacity of vector = " << myVector.capacity() << endl;
    //cout << myVector.empty() << endl;
    myVector.resize(25);
    //myVector.insert();
    //myVector.erase();
    cout << "Amount of items in vector = " << myVector.size() << endl;
    cout << "Capacity of vector = " << myVector.capacity() << endl;

    /*
    myVector.shrink_to_fit();
    cout << "Amount of items in vector after shrink_to_fit() = " << myVector.size() << endl;
    cout << "Amount of items in vector = " << myVector.size() << endl;
    cout << "Capacity of vector = " << myVector.capacity() << endl;
    */
    /*
    for(int i = 0; i < myVector.size(); i++)
    {
        cout << myVector[i] << endl;
    }
    /*
    //myVector.clear();
    //cout << "Amount of items in vector after clear() = " << myVector.size() << endl;
    myVector.pop_back();
    cout << "Amount of items in vector after pop_back() = " << myVector.size() << endl;
    /*
    try
    {
        cout << myVector.at(4) << endl;
    }
    catch(const std::out_of_range & ex)
    {
        cout << ex.what() << endl << endl;
    }
    */
    //myVector[0] = 32;

    //cout << "Amount of items in vector = " << myVector.size() << endl;
    /*
    for(int i = 0; i < myVector.size(); i++)
    {
        cout << myVector[i] << endl;
    }
    */
    return 0;
}
