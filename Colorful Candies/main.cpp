#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> colors(n);
    for(int i = 0; i < n; i++) {
        cin >> colors[i];
    }

    set<int> distinct_colors;
    for(int i = 0; i < k; i++) {
        distinct_colors.insert(colors[i]);
    }
    int max_distinct = distinct_colors.size();

    for(int i = k; i < n; i++) {
        distinct_colors.erase(colors[i - k]);
        distinct_colors.insert(colors[i]);
        max_distinct = max(max_distinct, (int)distinct_colors.size());
    }

    cout << max_distinct << endl;

    return 0;
}
