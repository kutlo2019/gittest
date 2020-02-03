#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
    const float vPi = 3.1415926;               // declaring a constant variable pi
    double r;                                      // declaring the integer radius
    string vInput;
    stringstream S;

    cout << "This program calculates the Volume and Surface are of a sphere." << endl;
    cout << "Enter the radius of the sphere: "; // the user is prompted to input radius
    cin >> vInput;
    S.str(vInput);
    S >> r;                                     // extracting the user input into integer r

    if (r < 0) {
        cout << "Invalid number entered." << endl;
        return 1;
    } else {
            float A, V;                        // declaring the area and volume
            A = 4.0*vPi*r*r;                      // surface area of sphere
            V = (4.0/3.0)*vPi*r*r*r;                // volume of the sphere
            cout << "The surface area and volume of the sphere radius: " << r << endl;
            cout << "Is given by: " << A << " and " << V << " respectively. " << endl;
       }

    return 0;
}
