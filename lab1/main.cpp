#include <iostream>

using namespace std;

float division(int x,int y)
{
    if(y!=0)
    {
        return (float)x/y;
    }
    else
       cout<<"Error";
       return 0;
    }
int addition (int x,int y)
{
    return x+y;
}

int main()
{
    int x,y;
    char op;
    cin>>x>>op>>y;
    if(x < -1048576 || x > 1048576 || y < -1048576 || y > 1048576){
        cout<<"Error";
        return 0;
    }
    if(op=='+')
        cout<<addition(x,y);
    else if(op=='/')
        cout<<division(x,y);
    else
        cout<<"Error";

            return 0;
}
