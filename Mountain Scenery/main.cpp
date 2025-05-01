#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[2*n+1];
    for(int i=0; i<(2*n+1); i++)
    {
        cin>>arr[i];
    }
    int i=1;
    while(k)
    {
        if(arr[i - 1] < arr[i]-1 && arr[i]-1 > arr[i + 1])
        {
            arr[i]--;
            k--;
        }

        i+=2;

    }
    for(int i=0; i<(2*n+1); i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
