#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    set<int, greater<int>> temp;
    int next_expected_snack = n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        temp.insert(arr[i]);

        while (!temp.empty() && *temp.begin() == next_expected_snack)
        {
            cout << *temp.begin() << " ";
            temp.erase(temp.begin());
            next_expected_snack--;
        }
        cout << endl;
    }

    return 0;
}
