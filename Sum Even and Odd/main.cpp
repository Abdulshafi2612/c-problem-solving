#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    if (input == "[]") {
        cout << "0.0" << endl;
        return 0;
    }

    input = input.substr(1, input.length() - 2);
    stringstream ss(input);
    string temp;
    int sum = 0, count = 0;

    while (getline(ss, temp, ',')) {
        sum += stoi(temp);
        count++;
    }

    double average = static_cast<double>(sum) / count;

    if (average == static_cast<int>(average) + 0.3) {
        cout  << static_cast<int>(average)<<".333333333333333 " << endl;
        }
    else if (average == static_cast<int>(average) + 0.7) {
        cout  << static_cast<int>(average)<<".666666666666667 " << endl;
        }
    else {
        cout << fixed << setprecision(1) << average << endl;
    }

    return 0;
}
