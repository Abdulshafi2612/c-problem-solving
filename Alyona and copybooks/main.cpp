#include <iostream>
#include <algorithm>


using namespace std;

int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int k=(4-n%4);
    if(k==1)
    {
        cout<<a;
    }
    else if(k==2)
    {
        int price1=2*a;
        int price2=b;
        cout<<min(price1,price2);
    }
    else if(k==3)
    {
        int price1=3*a;
        int price2=b+a;
        int price3=c;
        cout<<min({price1,price2,price3});
    }
    else
        cout<<0;

    return 0;
}
