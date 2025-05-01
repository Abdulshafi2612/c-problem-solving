#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N,H,X;
    cin>>N>>H>>X;
    vector<int> potion(N);
    for(int i=0;i<N;i++)
    {
        cin>>potion[i];
    }
    sort(potion.begin(),potion.end());
    auto it= lower_bound(potion.begin(),potion.end(),X-H);
    cout<<distance(potion.begin(), it) + 1;
    return 0;
}
