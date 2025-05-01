#include <iostream>

using namespace std;

int main()
{
    long long n, m, counter = 0;
    cin >> n >> m;

    for (long long i = 1; i <= n; i++)
    {
        for (long long j = 1; 5 * j - i <= m; j++)
        {
            if (5 * j - i > 0)
            {
                counter++;
            }
        }
    }

    cout << counter;
    return 0;
}
