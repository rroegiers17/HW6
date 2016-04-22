//
//  Rachel Roegiers
//  CS172-1
//  HW06
//  12.8: Implement Vector Class
//

#include <iostream>
using namespace std;

template <typename T>
class vector
{
private:
    T elements[100];
    int vectorSize;
public:
    vector(); // constructs an empty vector witht he specified element type
    vector(int size); // constructs a vector with the initial size, filled with default values
    vector(int size, T defaultValue); // constructs a vector witht he initial size, filled with specified values
    void push_back(T element); // appends the element in this vector
    void pop_back(); // removes the last element from this vector
    unsigned const int size(); // returns the number of the elemnets in this vecotr
    const T at(int index); // returns the element at the specified index in this vector
    const bool empty(); // returns true if the vector is empty
    void clear(); // removes all elements from this vector
    void swap(vector v2); // swaps the contents of this vector with the  specified vector
};

template <typename T>
vector<T>:: vector()
{
    vectorSize = 0;
}

template <typename T>
void vector<T>::push_back(T element)
{
    elements[vectorSize++] = element;
}

template <typename T>
void vector<T>::pop_back()
{
    return elements[--vectorSize];
}

template <typename T>
unsigned const int vector<T>::size()
{
    return vectorSize;
}

template <typename T>
const T vector <T>::at(int index)
{
    return elements[index];
}

template <typename T>
const bool vector<T>::empty()
{
    return (vectorSize == 0);
}

template <typename T>
void vector<T>::clear()
{
    vectorSize = 0;
}

template <typename T>
void vector<T>::swap(vector v2)
{
    T temp[100];
    int tempSize = v2.size();
    for (int i = 0; i < v2.size(); i++)
        temp[i] = v2.at(i);
    
    v2.clear();
    for (int i = 0; i < size(); i++)
        v2.push_back(at(i));
    
    clear();
    for (int i = 0; i < tempSize; i++)
        push_back(temp[i]);
}

int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    
    vector<int> v2;
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);
    
    v1.swap(v2);
    
    for (int i = 0; i < v1.size(); i++)
       cout << v1.at(i) << " ";
    
    return 0;
}














