#include <iostream>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    long long arr[n];
    long long j = 1;

    for (long long i = 0; i < (n + 1) / 2; i++)
    {
        arr[i] = j;
        j += 2;
    }

    j = 2;

    for (long long i = (n + 1) / 2; i < n; i++)
    {
        arr[i] = j;
        j += 2;
    }

    cout << arr[k - 1];

    return 0;
}
