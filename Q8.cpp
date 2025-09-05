#include<iostream>
#include<vector>
using namespace std;
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

int distEl(vector<int> &x)
{
    Bsort(x);
    int i = 0 ;
    int j = i+1;
    int count = 1;
    while(j < x.size())
    {
        if(x[i] == x[j])
        {
            j++;
        }
        else{
            count++;
            i = j;
            j++;
        }
    }
    return count;
}
int main()
{
    vector<int> v = {1,2,1,3,2,4,3,4,1};
    cout<<"Number of distinct elements : " <<distEl(v)<<endl;
    return 0;
}