#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int num=n+1;
    bool check=true;
    for(num;check;num++)
    {
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
            {
                break;
            }
            if(i==num-1)
                check=false;
        }
    }
    if(num-1==m)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
