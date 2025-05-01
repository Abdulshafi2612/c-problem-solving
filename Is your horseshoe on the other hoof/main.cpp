#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int>horseshoe;
    for(int i=0;i<4;i++)
    {
        int x;
        cin>>x;
        horseshoe.insert(x);
    }
    cout<<4-horseshoe.size();
    return 0;
}
