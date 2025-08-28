#include <iostream>
#include<vector>
using namespace std;
//Bubble Sort Code
void Bsort(vector<int> &v)
{
    for(int i = v.size() - 1 ; i > 0 ; i--)
    {
        for(int j = 0 ; j<=i-1 ; j++)
        {
            if(v[j]>v[j+1])
            {
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
}
int main() {
    // Write C++ code here
    int i =0;
    vector<int> v = {1,3,2,4,6,5};
    Bsort(v);
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << " ";
    }

    return 0;
}


