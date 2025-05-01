#include <iostream>

using namespace std;

int main()
{
    int n,top;
    cin>>n>>top;
    int arr[n][2];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin>>arr[i][j];

        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2; j++)
        {
            if(arr[i][j]==top || arr[i][j]==7-top)
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
    return 0;
}
