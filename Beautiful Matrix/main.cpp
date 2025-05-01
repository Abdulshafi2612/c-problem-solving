#include <iostream>

using namespace std;

int main()
{
    int arr[5][5];
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>arr[i][j];
        }
    }
    int row=-1,col=-1;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(arr[i][j]==1)
            {
                row=i;
                col=j;
                break;
            }
        }
        if(row!=-1 && col!=-1)
            break;
    }
    cout<<abs(2-col)+abs(2-row);

    return 0;
}
