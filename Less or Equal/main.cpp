#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // ترتيب التسلسل
    sort(a.begin(), a.end());

    int x;
    if (k == 0) {
        // إذا كان k يساوي 0، نحتاج إلى قيمة أقل من جميع القيم في التسلسل
        x = a[0] - 1;
    } else {
        // اختيار القيمة عند الموضع k-1 (لأن الفهرسة تبدأ من 0)
        x = a[k-1];
    }

    // التحقق من صحة x
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] <= x) {
            count++;
        }
    }

    if (count == k && x >= 1 && x <= 1000000000) {
        cout << x << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
