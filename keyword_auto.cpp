//This code does not working
#include <iostream>
#include <vector>

//using namespace std;

int main()
{
    std::vector<int> myVector = {7, 34, 39};
    std::vector<int>::iterator it = myVector.begin();
    auto it2 = myVector.begin();
    // vector<int>::iterator it = myVector.begin(); equivalent - auto it2 = myVector.begin();
    //for(std::vector<int>::iterator it = myVector.begin(); it != myVector.end; it++)
    for(auto it = myVector.begin(); it != myVector.end; it++)
    {
        std::cout << *it2 << std::endl;
    }

    return 0;
}
