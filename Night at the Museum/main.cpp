#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int counter = 0;
    char currentChar = 'a';

    for(int i = 0; i < s.size(); i++)
    {
        counter += min(abs(currentChar - s[i]), 26 - abs(currentChar - s[i]));
        currentChar = s[i];
    }
    cout << counter;
    return 0;
}
