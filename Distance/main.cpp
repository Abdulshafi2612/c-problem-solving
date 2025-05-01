#include <iostream>

using namespace std;

int main()
{
    int n;
    int d;
    int counter=0;
    cin>>n>>d;


    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        if(x * x + y * y <= d * d)
            counter++;
    }
    cout<<counter;

    return 0;
}
