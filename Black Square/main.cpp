#include <iostream>

using namespace std;

int main()
{
    int arr[4];
    string s;
    int calories=0;
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        calories+=arr[s[i]-'1'];
    }
    cout<<calories;
    return 0;
}
