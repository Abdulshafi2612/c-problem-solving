#include <iostream>

using namespace std;

int main()
{
    int y,w;
    cin>>y>>w;
    int d=6-(max(w,y))+1;
    if(d==2)
        cout<<1<<"/"<<3;
    else if(d==3)
        cout<<1<<"/"<<2;
    else if(d==6)
        cout<<1<<"/"<<1;
    else if(d==4)
        cout<<2<<"/"<<3;
    else
        cout<<d<<"/"<<6;
    return 0;
}
