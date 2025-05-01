#include <iostream>

using namespace std;

int main()
{
    int n,m,num,sum=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>num;
            sum+=num;
        }
        cout<<sum<<endl;
        sum=0;
    }

    return 0;
}
