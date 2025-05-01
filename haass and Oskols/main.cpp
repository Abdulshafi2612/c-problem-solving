#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int m;
    cin>>m;
    for(int i=0; i<m; i++)
    {
        int x,y;
        cin>>x>>y;
        if(y>arr[x-1])
        {
            arr[x-2]+=arr[x-1];
            arr[x-1]=0;
        }
        else if(x==1)
        {
            arr[x]+=arr[x-1]-y;
            arr[x-1]=0;

        }
        else if(x==n)
        {
            arr[x-2]+=y-1;
            arr[x-1]=0;

        }
        else
        {
            arr[x-2]+=y-1;
            arr[x]+=arr[x-1]-y;
            arr[x-1]=0;
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
/*
    10 10 10 10 10
1-- 14 0  15 10 10
2-- 14 12 0  12 10
3-- 25 0  0  12 10
4-- 0  12 0  12 10
5-- 0  12 5  0  6

    10 10 10 10 10
1-- 14 0  15 10 10
2-- 14 12 0  12 10
3-- 25 0  0  12 10
4-- 0  12 0  12 10
5-- 0  12 5  0  6

*/
