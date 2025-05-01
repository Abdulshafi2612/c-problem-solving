#include <iostream>

using namespace std;

int main()
{
    int k2,k3,k5,k6;
    int c256,c32;
    cin>>k2>>k3>>k5>>k6;

    c256=min(k2,min(k5,k6));
    k2-=c256;
    c32=min(k2,k3);
    cout<<(32*c32+256*c256);

    return 0;
}
