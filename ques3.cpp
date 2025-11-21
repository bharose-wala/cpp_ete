#include <iostream>
#include <cmath>
using namespace std;

// ----------------------------------------------------
// Subfunction: Find intersection of two lines
// Each line is of form: a*x + b*y = c
// ----------------------------------------------------
bool intersection(double a1, double b1, double c1,
                  double a2, double b2, double c2,
                  double &x, double &y)
{
    double det = a1*b2 - a2*b1;

    if (fabs(det) < 1e-12)   // Lines are parallel or nearly parallel
        return false;

    x = (c1*b2 - c2*b1) / det;
    y = (a1*c2 - a2*c1) / det;
    return true;
}

// ----------------------------------------------------
// Subfunction: Check if intersection (x,y) satisfies line equation
// Returns absolute error
// ----------------------------------------------------
double check_error(double a, double b, double c, double x, double y)
{
    double LHS = a*x + b*y;
    return fabs(LHS - c);
}

// ----------------------------------------------------
// MAIN
// ----------------------------------------------------
int main()
{
    // ---------------------------
    // Q4 Input Lines
    // ---------------------------
    // Line1: 10^6 x + 2 y = 5
    double a1 = 1e6, b1 = 2, c1 = 5;

    // Line2: 3 x + 0.0001 y = 7
    double a2 = 3, b2 = 0.0001, c2 = 7;

    // Line3: 10^6 x + 2.00001 y = 5.00001
    double a3 = 1e6, b3 = 2.00001, c3 = 5.00001;

    double x12, y12, x13, y13, x23, y23;

    // ----------------------------------------------------
    // Intersections for lines (1,2), (1,3), (2,3)
    // ----------------------------------------------------
    cout << "\n--- INTERSECTIONS ---\n";

    if (intersection(a1,b1,c1, a2,b2,c2, x12, y12))
        cout << "Intersection L1 & L2: x = " << x12 << ", y = " << y12 << endl;
    else
        cout << "L1 & L2 are parallel.\n";

    if (intersection(a1,b1,c1, a3,b3,c3, x13, y13))
        cout << "Intersection L1 & L3: x = " << x13 << ", y = " << y13 << endl;
    else
        cout << "L1 & L3 are parallel.\n";

    if (intersection(a2,b2,c2, a3,b3,c3, x23, y23))
        cout << "Intersection L2 & L3: x = " << x23 << ", y = " << y23 << endl;
    else
        cout << "L2 & L3 are parallel.\n";


    // ----------------------------------------------------
    // Error Estimation
    // ----------------------------------------------------
    cout << "\n--- ERROR CHECKING ---\n";

    cout << "Error L1@P12 = " << check_error(a1,b1,c1,x12,y12) << endl;
    cout << "Error L2@P12 = " << check_error(a2,b2,c2,x12,y12) << endl;

    cout << "Error L1@P13 = " << check_error(a1,b1,c1,x13,y13) << endl;
    cout << "Error L3@P13 = " << check_error(a3,b3,c3,x13,y13) << endl;

    cout << "Error L2@P23 = " << check_error(a2,b2,c2,x23,y23) << endl;
    cout << "Error L3@P23 = " << check_error(a3,b3,c3,x23,y23) << endl;

    return 0;
}