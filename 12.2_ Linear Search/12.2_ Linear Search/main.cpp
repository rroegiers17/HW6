//
//  Rachel Roegiers
//  CS172-1
//  HW06
//  12.2: Linear Search
//

#include <iostream> 
#include <string>
using namespace std;

template <typename T>
int linearSearch(const T list[], T key, int arraySize)
{
    for(int i = 0; i < arraySize; i++){
        if (key == list[i])
            return i;
    }
    return -1;
}

int main()
{
    int intArray[] = {1, 2, 3, 4};
    double doubleArray[] = {1.2, 4.34, 3.43453, 324.7};
    string stringArray[] = {"Mary", "Joe", "Bob", "Bluber"};
    
    cout << "linearSearch(intArray, 2, 4) is " << linearSearch(intArray, 2, 4) << endl;
    cout << "linearSearch(doubleArray, 1.2, 4) is " << linearSearch(doubleArray, 1.2, 4) << endl;
    string a = "Bluber";
    cout << "linearSearch(stringArray, 4, 4) is " << linearSearch(stringArray, a, 4) << endl;
    
    return 0;
    
}
