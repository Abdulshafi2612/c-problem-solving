#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string team1,team2;
    int first=0,second=0;

    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(i==0)
        {   team1=s;
            first++;
        }
        else if(s==team1)
            first++;
        else
        {
            team2=s;
            second++;
        }

    }
    if(first>second)
        cout<<team1;
    else
        cout<<team2;
    return 0;
}
