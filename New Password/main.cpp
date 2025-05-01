#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string s="";
    char ch='a';
    for(int i=0;i<n;i++)
    {
       s+=char('a'+i%k);

    }
    cout<<s;
    return 0;
}
