#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string arr[n];
    int counter1=0,counter=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<arr[i].size(); j++)
        {

            if(arr[i][j]-'0'<=k)
            {
                counter1++;
            }
        }
        if(counter1==arr[i].size())
        {
            counter++;
        }
        counter1=0;
    }
    cout<<counter;

    return 0;
}
