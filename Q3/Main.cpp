/* Define a function hypotenuse that calculates the hypotenuse of a right triangle
when the other two sides are given. The function should take two double arguments
and return the hypotenuse as a double. Use this function in a program to determine
the hypotenuse for each of the triangles shown below. 

Triangle	Side 1		Side 2
1			3.0			4.0
2			5.0			12.0
3			8.0			15.0 */

#include <iostream>  
using namespace std;


double hypotenuse(double side1, double side2) {
    return sqrt(side1 * side1 + side2 * side2);
}

int main() {
    
    double side1_1 = 3.0, side2_1 = 4.0;
    double side1_2 = 5.0, side2_2 = 12.0;
    double side1_3 = 8.0, side2_3 = 15.0;


    double hypotenuse1 = hypotenuse(side1_1, side2_1);
    double hypotenuse2 = hypotenuse(side1_2, side2_2);
    double hypotenuse3 = hypotenuse(side1_3, side2_3);


    cout << "Hypotenuse of triangle 1: " << hypotenuse1 << endl;
    cout << "Hypotenuse of triangle 2: " << hypotenuse2 << endl;
    cout << "Hypotenuse of triangle 3: " << hypotenuse3 << endl;

    return 0;
}