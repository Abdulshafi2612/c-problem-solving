#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int start=0,end=n-1;
    int serja=0,dima=0,turn=1;
    while(start<=end)
    {
        if(arr[start]>arr[end] && turn%2==1)
        {
            serja+=arr[start];
            start++;
            turn++;
        }
        else if(arr[start]<=arr[end] && turn%2==1)
        {
            serja+=arr[end];
            end--;
            turn++;

        }
        else if(arr[start]>arr[end] && turn%2==0)
        {
            dima+=arr[start];
            start++;
            turn++;
        }
        else if(arr[start]<=arr[end] && turn%2==0)
        {
            dima+=arr[end];
            end--;
            turn++;

        }

    }
    cout<<serja<<" "<<dima;

    return 0;
}
