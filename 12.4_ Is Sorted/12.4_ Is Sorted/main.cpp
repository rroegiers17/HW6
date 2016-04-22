//
//  Rachel Roegiers
//  CS172-1
//  HW06
//  12.4: Is sorted?
//

#include <iostream>
#include <string>
using namespace std;

template<typename T>
bool isSorted(const T list[], int size)
{
    for( int i = 0; i < size - 1; i++)
    {
        if (list[i] < list[i-1])
            return false;
    }
    return true;
}

int main()
{
    string a = "sheep";
    string b = "horse";
    string c = "cattle";
    string d = "dog";
    int list1[] = { 1, 18, 7,23 ,343};
    double list2[] = {32.3, 3432, 434534.3};
    string list3[] = {a, b, c, d};
    
    cout << "1 = yes, 0 = no" << endl;
    cout << "Is the int array sorted? " << isSorted(list1, 5) << endl;
    cout << "Is the double array sorted? " << isSorted(list2, 3) << endl;
    cout << "Is the string list sorted? " << isSorted(list3, 4) << endl;
    
    return 0;
}
