#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n,p,q;
    cin>>n>>p;
    int X[p];
    for(int i=0;i<p;i++)
    {
        cin>>X[i];
    }
    cin>>q;
    int Y[q];
    for(int i=0;i<q;i++)
    {
        cin>>Y[i];
    }
    set<int> s;
    for(int i=0;i<max(p,q);i++)
    {
        s.insert(X[i]);
        s.insert(Y[i]);
    }
    if(s.size()==n+1)
    {
        cout<<"I become the guy.";
    }
    else
    {
        cout<<"Oh, my keyboard!";

    }
    return 0;
}
