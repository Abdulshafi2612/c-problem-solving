#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int counter=1;
    string arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++)
    {
        if(arr[i][0]!=arr[i+1][0])
            counter+=1;
    }
    cout<<counter;
    return 0;
}
