#include <iostream>
using namespace std;

int main()
{
    int A, B, C, X;
    cin >> A >> B >> C >> X;

    int counter = 0;

    for (int i = 0; i <= A; ++i)
    {
        for (int j = 0; j <= B; ++j)
        {
            float k= (X-500*i-100*j)/50;
            if(k>=0)
            {
                counter++;
            }
        }
    }

    cout << counter;
    return 0;
}
