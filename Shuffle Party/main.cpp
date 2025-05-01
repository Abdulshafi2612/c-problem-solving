#include <iostream>

using namespace std;


int main()
{
    int x;
    long long n;
    cin>>x;
    for(int i=0; i<x; i++)
    {
        cin>>n;
        long long pos = 1;
        for (int k = 2; k <= n; ++k)
        {
            int d = 1;
            for (int i = 1; i < k; ++i)
            {
                if (k % i == 0)
                {
                    d = i;
                }
            }
            if (d == pos)
            {
                pos = k;
            }
        }
        cout<<pos<<endl;

    }
    return 0;
}

