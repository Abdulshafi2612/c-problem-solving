#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int counter=0;
    int left=0;
    int right=s.size()-1;
    while(right>left)
    {
        if(s[left]==s[right])
        {
            left++;
            right--;
            counter++;
        }
    }
    if(counter==n/2)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";


    return 0;
}
