/* Implement the following integer functions:
a. Function celsius returns the Celsius equivalent of a Fahrenheit temperature.
b. Function fahrenheit returns the Fahrenheit equivalent of a Celsius
temperature.
c. Use these functions to write a program that prints charts showing the
Fahrenheit equivalents of all Celsius temperatures from 0 to 100 degrees, and
the Celsius equivalents of all Fahrenheit temperatures from 32 to 212 degrees.

Print the outputs in a neat tabular format that minimizes the number of lines of
output while remaining readable. */

#include <iostream>
using namespace std;

int toCel(int f) {
	int c = (f - 32);
	c = c * 5 / 9;
	return c;
}

int toFar(int c) {
	int f = (9 / 5) * c + 32;
	return f;
}

int main() {
	for (int i = 0; i <= 100; i++) {
		int conv = toCel(i);
		cout << i << "f = " << conv << "c\n";
	}

	for (int i = 32; i <= 212; i++) {
		int conv = toFar(i);
		cout << i << "c = " << conv << "f\n";
	}

}