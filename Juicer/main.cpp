#include <iostream>

using namespace std;

int main()
{
    int n,b,d;
    cin>>n>>b>>d;
    int arr[n];
    int sum=0,waste=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>b)
            continue;
        else
        {
            sum+=arr[i];
            if(sum>d)
            {
                waste++;
                sum=0;
            }
        }
    }
    cout<<waste;
    return 0;
}
