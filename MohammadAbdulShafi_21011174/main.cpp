#include <iostream>
using namespace std;

int main() {
    int x, y;
    char op;

    cin >> x >> op >> y;

    if (x <= -1048576 || x > 1048576 || y <= -1048576 || y > 1048576) {
        cout << "Error" << endl;
        return 0;
    }

    if (op == '+') {
        cout << (x + y) << endl;
    } else if (op == '/') {
        if (y == 0) {
            cout << "Error" << endl;
        } else {
            cout << static_cast<float>(x) / y << endl;
        }
    } else {
        cout << "Error" << endl;
    }

    return 0;
}
