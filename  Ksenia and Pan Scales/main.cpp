#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    string s,add;
    cin>>s>>add;
    string s1;
    string s2;
    for(int i=0; i<s.size(); i++)
    {
        bool cond=true;
        if(s[i]=='|')
        {
            cond= !cond;
            continue;
        }

        if(cond)
        {
            s1+=s[i];
        }
        else
        {
            s2+=s[i];
        }

    }
    for(int i=0;i<add.size();i++)
    {
        if(i%2==0)
            s1+=add[i];
        else
            s2+=add[i];
    }
 cout<<s1<<'|'<<s2;





   /*if (abs(static_cast<int>(s1.size()) - static_cast<int>(s2.size())) != add.size())
        cout << "Impossible";
    else
    {
        if(s1.size()>s2.size())
            s2+=add;
        else
            s1+=add;
        cout<<s1<<'|'<<s2;
    }
*/
    return 0;
}
