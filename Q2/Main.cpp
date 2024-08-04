/* Function floor can be used to round a number to a specific decimal place. The
statement y = floor(x * 10 + 0.5) / 10; rounds x to the tenths position (the
first position to the right of the decimal point). The statement y = floor(x * 100
+ 0.5) / 100; rounds x to the hundredths position (the second position to the
right of the decimal point). Write a program that defines four functions to round a
number x in various ways:
a. roundToInteger(number)
b. roundToTenths(number)
c. roundToHundredths(number)
d. roundToThousandths(number)

For each value read, your program should print the original value, the number
rounded to the nearest integer, the number rounded to the nearest tenth, the
number rounded to the nearest hundredth and the number rounded to the nearest
thousandth. */

#include <iostream>
using namespace std;

float roundToInt(float x) {
	float y = float(x + 1 + 0.5) / 1;
	return y;
}

float roundToTenth(float x) {
	float y = float(x + 10 + 0.5) / 10;
	return y;
}

float roundToHundreth(float x) {
	float y = float(x + 100 + 0.5) / 100;
	return y;
}

float roundToThousandths(float x) {
	float y = float(x + 1000 + 0.5) / 1000;
	return y;
}


int main() {
	long x;

	cout << "Enter a number";
	cin >> x;

	float y = roundToInt(x);
	float z = roundToTenth(x);
	float j = roundToHundreth(x);
	float w = roundToThousandths(x);

	cout << "The number you entered is " << x << endl;
	cout << "The number rounded to the int is " << y << endl;
	cout << "The number rounded to the tenth is " << z << endl;
	cout << "The number rounded to the hundreth " << j << endl;
	cout << "The number rounded to the thousandth " << w << endl;


}

