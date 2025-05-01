#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int crimes=0;
    int police=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            police+=arr[i];
        }
        else if(police<1 && arr[i]<0)
            crimes++;
        else if(police>=1 && arr[i]<0)
        {
            police--;
        }
    }
    cout<<crimes;
    return 0;
}
