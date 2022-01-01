// C program to implement Runge Kutta method
#include <stdio.h>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// A sample differential equation "dy/dx = (x - y)/2"
float dydx(float x, float y)
{
    return -10 * sin(x*y);
}

// Finds value of y for a given x using step size h
// and initial value y0 at x0.
float rungeKutta(float x0, float y0, float x, float h)
{
    // Count number of iterations using step size or
    // step height h
    float step;
    step = (x - x0) / h * 1.0;
    cout << step << endl;
    float k1, k2, k3, k4, k5;

    // Iterate for number of iterations
    float y = y0;
    for (int i = 1; i <= step; i++)
    {
        // Apply Runge Kutta Formulas to find
        // next value of y
        k1 = h * dydx(x0, y);
        k2 = h * dydx(x0 + 0.5 * h, y + 0.5 * k1);
        k3 = h * dydx(x0 + 0.5 * h, y + 0.5 * k2);
        k4 = h * dydx(x0 + h, y + k3);

        // display k1, k2, k3, k4
        cout << "k1 = " << k1 << endl;
        cout << "k2 = " << k2 << endl;
        cout << "k3 = " << k3 << endl;
        cout << "k4 = " << k4 << endl;

        // Update next value of y
        y = y + (1.0 / 6.0) * (k1 + 2 * k2 + 2 * k3 + k4);

        cout << y << endl;

        // Update next value of x
        x0 = x0 + h;
    }

    return y;
}

// Driver method
int main()
{
    float x0 = 0, y = 4.472, x = 0.2, h = 0.2;
    printf("\nThe value of y at x is : %.4f",
           rungeKutta(x0, y, x, h));
    return 0;
}
