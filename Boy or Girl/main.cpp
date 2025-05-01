#include <iostream>
#include <set>

using namespace std;

int main()
{
    string typed;
    cin>>typed;
    set<char> name;
    for(int i=0;i<typed.size();i++)
    {
        name.insert(typed[i]);
    }
    if(name.size()%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
        cout<<"IGNORE HIM!";
    return 0;
}
