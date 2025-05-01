#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    int counter=1;
    cin>> n;

    vector<int> stairs(n);
    for(int i=0; i<n; i++)
    {
        cin>>stairs[i];
    }
    for(int i=1; i<n; i++)
    {
        if(stairs[i]==1)
        {
            counter++;
        }
    }
    cout<<counter<<endl;
       for(int i=1; i<n; i++)
    {
        if(stairs[i]==1)
        {
            cout<<stairs[i-1]<<" ";        }
    }
        cout<<stairs.back();

    return 0;
}
