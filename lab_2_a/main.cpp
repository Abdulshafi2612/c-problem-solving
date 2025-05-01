#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    if (input == "[]") {
        cout << "[]" << endl;
        return 0;
    }

    input = input.substr(1, input.length() - 2);

    int count = 0;
    for (char c : input) {
        if (c == ',') {
            count++;
        }
    }
    count++;

    int* arr = new int[count];
    stringstream ss(input);
    string temp;
    int i = 0;

    while (getline(ss, temp, ',')) {
        arr[i++] = stoi(temp);
    }

    int arraay[count];
    int m = count - 1;
    for (int j = 0; j < count; j++, m--) {
        arraay[j] = arr[m];
    }

    for (int j = 0; j < count; j++) {
            if(count==1)
            {
                cout<<'[' << arraay[0] <<']';
                return 0;
            }
        if (j == 0) {
            cout << '[' << arraay[0] << ", ";
        } else if (j == count - 1) {
            cout << arraay[j] << ']';
        } else {
            cout << arraay[j] << ", ";
        }
    }

    delete[] arr;

    return 0;
}
