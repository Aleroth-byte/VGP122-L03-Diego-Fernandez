/* Write a program that inputs a series of integers and passes them one at a time to
function isEven, which uses the modulus operator to determine whether an integer
is even. The function should take an integer argument and return true if the integer
is even and false otherwise. */

#include <iostream>

using namespace std;

bool isEven(int n) {
    if (n % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int store;
    int count;
    cout << "How many number are you inputing?";
    cin >> count;

    int* numbers = new int[count];

    for (int i = 0; i < count; i++) {
        cout << "Enter a number";
        cin >> store;
        numbers[i] = store;
    }

    for (int i = 0; i < count; i++) {
            if (isEven(numbers[i]) == 1) {
                cout << "Number " << i + 1 << " = " << "true\n";
            }
            else {
            cout << "Number " << i + 1 << " = " << "false\n";
        }
    }
}
