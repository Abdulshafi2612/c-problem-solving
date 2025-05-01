#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int right=s.size()-1;
    int counter=0;

    for (int i=0;i<right;i++,right--)
    {
        if(s[i]!=s[right])
        {
            counter++;
        }

    }
    cout<<counter;
    return 0;
}
