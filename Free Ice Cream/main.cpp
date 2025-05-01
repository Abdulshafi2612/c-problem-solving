#include <iostream>

using namespace std;

int main()
{
    int n;
    long long x;
    cin>>n>>x;
    int sad=0;
    for(int i=0 ; i<n ; i++)
    {
        char sign;
        int num;
        cin>>sign>>num;
        if(sign=='+')
            x+=num;
        else if (sign=='-')
        {
            if(x>=num)
                x-=num;
            else
                sad++;
        }
    }
    cout<<x<<" "<<sad;
    return 0;
}
