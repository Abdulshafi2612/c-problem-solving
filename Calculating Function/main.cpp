#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long sum=0;
    if(n%2==0)
        sum=n/2;
    else
        sum=n/2-n;
    cout<<sum;
    return 0;
}
