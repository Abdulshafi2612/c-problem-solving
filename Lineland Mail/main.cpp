#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    for(int i=0 ; i<n ; i++)
    {
        if(i==0)
        {
            cout<<arr[i+1]-arr[i]<<" "<<arr[n-1]-arr[i]<<endl;
            continue;
        }
        else if(i==n-1)
        {
            cout<<arr[i]-arr[i-1]<<" "<<arr[i]-arr[0];
            break;
        }
        else
            cout<<min(arr[i]-arr[i-1],arr[i+1]-arr[i])<<" "<<max(arr[i]-arr[0],arr[n-1]-arr[i])<<endl;
    }
    return 0;
}
