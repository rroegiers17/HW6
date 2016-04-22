//
//  Rachel Roegiers
//  CS172-1
//  HW06
//  12.20: Shuffle Vector
//

#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

template <typename T>
void shuffle (vector<T>& v)
{
    srand(time(NULL));
    for (int i = 0; i < v.size(); i++)
    {
        int index = rand() % v.size();
        T temp = v[index];
        v[index] = v[i];
        v[i] = temp;
    }
}

int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(18);
    v.push_back(3);
    v.push_back(13);
    v.push_back(73);
    v.push_back(6231);
    
    shuffle(v);
    
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " " ;
    cout << endl;
    return 0;
}
