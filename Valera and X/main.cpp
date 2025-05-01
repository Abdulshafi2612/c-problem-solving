#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int right=n-1;
    bool condition=true;
    vector<string> vec(n);
    for(int i=0; i<n; i++)
    {
        cin>>vec[i];
    }
    if(vec[0][0]==vec[0][1])
    {
        cout<<"NO";
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        if(vec[i][i]!= vec[i][right])
        {
            condition= false;
            break;
        }
        right--;
    }

    if(!condition)
    {
        cout<<"NO";
        return 0;
    }

    for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i!=j && i != n-j-1)
                {
                    if (vec[i][j]!=vec[0][1])
                    {
                        cout<<"NO";
                        return 0;
                    }
                }

            }
        }


    cout<<"YES";


    return 0;
}
