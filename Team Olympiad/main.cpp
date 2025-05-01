#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> input(n);
    vector<int> prog;
    vector<int> math;
    vector<int> pe;
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    for(int i=0;i<n;i++)
    {
        if(input[i]==1)
            prog.push_back(i+1);
        else if(input[i]==2)
            math.push_back(i+1);
        else if(input[i]==3)
            pe.push_back(i+1);
    }
    int num=min({prog.size(),math.size(),pe.size()});
    cout<<num<<endl;
    for(int i=0;i<num;i++)
    {
        cout<<prog[i]<<" "<<math[i]<<" "<<pe[i]<<endl;
    }
    return 0;
}
