#include <iostream>

using namespace std;

int main()
{
    int counter = 0;
    int n;
    cin >> n;

    for (int a = 1; a < n; ++a) {
        for (int b = 1; a * b < n; ++b) {
            int c = n - (a * b);
            if (c > 0) {
                counter++;
            }
        }
    }

    cout << counter;
    return 0;
}
