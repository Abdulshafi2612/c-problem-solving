#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    string line1="qwertyuiop";
    string line2="asdfghjkl;";
    string line3="zxcvbnm,./";
    char LOR;
    cin>>LOR;
    string message;
    cin>>message;
    unordered_map<char,char> keyboard;
    if(LOR=='R')
    {
        for (int i=0; i<line1.size(); i++)
        {
            keyboard[line1[i]]=line1[i-1];
        }
        for (int i=0; i<line2.size(); i++)
        {
            keyboard[line2[i]]=line2[i-1];
        }
        for (int i=0; i<line3.size(); i++)
        {
            keyboard[line3[i]]=line3[i-1];
        }
    }
    else if(LOR=='L')
    {
        for (int i=0; i<line1.size(); i++)
        {
            keyboard[line1[i]]=line1[i+1];
        }
        for (int i=0; i<line2.size(); i++)
        {
            keyboard[line2[i]]=line2[i+1];
        }
        for (int i=0; i<line3.size(); i++)
        {
            keyboard[line3[i]]=line3[i+1];
        }
    }
    string result="";
    for(char c:message)
    {
        result+=keyboard[c];
    }
    cout<<result;

    return 0;
}
