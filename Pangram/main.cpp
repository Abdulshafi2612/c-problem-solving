#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
#include <set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    set<char> unique;
    for (int i=0; i<str.size(); i++)
    {
        unique.insert(str[i]);
    }

    if (unique.size() == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
