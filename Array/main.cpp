#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    vector<int> neg;
    vector<int> pos;
    vector<int> zero;

    for(int i=0; i<n; i++)
    {
        cin>>nums[i];
    }

    for(int i=0; i<n; i++)
    {
        if(nums[i]==0)
        {
            zero.push_back(nums[i]);
        }
        else if(nums[i]>0)
        {
            pos.push_back(nums[i]);
        }
        else if(nums[i]<0)
        {
            neg.push_back(nums[i]);
        }
    }

    if(pos.size()==0)
    {
        pos.push_back(neg.back());
        neg.pop_back();
        pos.push_back(neg.back());
        neg.pop_back();
    }
    if(neg.size()%2==0)
    {
        zero.push_back(neg.back());
        neg.pop_back();
    }
    cout<<neg.size()<<" ";
    for(int i=0; i<neg.size(); i++)
    {
        cout<<neg[i]<<" ";
    }
    cout<<endl<<pos.size()<<" ";
    for(int i=0; i<pos.size(); i++)
    {
        cout<<pos[i]<<" ";
    }
    cout<<endl<<zero.size()<<" ";
    for(int i=0; i<zero.size(); i++)
    {
        cout<<zero[i]<<" ";
    }

    return 0;
}
