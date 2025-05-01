#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> spaces(5);
    for(int i=0;i<5;i++)
    {
        cin>>spaces[i];
    }
    int k;
    cin>>k;
    sort(spaces.begin(),spaces.end());
    if(spaces[4]-spaces[0]>k)
    {
        cout<<":(";
    }
    else
        cout<<"Yay!";


    return 0;
}
