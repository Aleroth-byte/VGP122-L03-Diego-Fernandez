/* Use a one-dimensional array to solve the following problem. Read in 20 numbers,
each of which is between 10 and 100, inclusive. As each number is read, validate it
and store it in the array only if it isn’t a duplicate of a number already read. After
reading all the values, display only the unique values that the user entered. Provide
for the “worst case” in which all 20 numbers are different. Use the smallest
possible array to solve this problem. */

#include <iostream>

using namespace std;

const int MAX_SIZE = 20;

bool isUnique(int arr[], int size, int num) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == num) {
            return false;
        }
    }
    return true;
}

int main() {
    int numbers[MAX_SIZE];
    int count = 0;

    
    cout << "Enter 20 numbers between 10 and 100 (inclusive):" << endl;
    while (count < MAX_SIZE) {
        int num;
        cin >> num;

        
        if (num < 10 || num > 100) {
            cout << "Number out of range. Please enter a number between 10 and 100." << endl;
            continue;
        }

        
        if (isUnique(numbers, count, num)) {
            numbers[count] = num;
            ++count;
        }
        else {
            cout << "Duplicate number detected. Please enter a different number." << endl;
        }
    }

    
    cout << "Unique numbers entered:" << endl;
    for (int i = 0; i < count; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}