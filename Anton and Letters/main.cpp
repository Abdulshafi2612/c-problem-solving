#include <iostream>
#include <set>
using namespace std;

int main()
{
    string input;
    getline(cin,input);
    set<char> result;
    for(int i=0;i<input.size();i++)
    {
        if(input[i]>='a' && input[i]<='z')
        {
            result.emplace(input[i]);
        }
    }
    cout<<result.size();
    return 0;
}
