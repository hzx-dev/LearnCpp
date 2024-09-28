// Author: Kevin
// This is the solution of the problem 1 of the P5735.
// 这东西真的是我写的，除了注释都是我一行一行敲的。

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Function to calculate the distance between two points
double distance(double x1, double y1, double x2, double y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main()
{
    double x1, y1, x2, y2, x3, y3;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    cout << fixed << setprecision(2) << 
        distance(x1, y1, x2, y2) + distance(x1, y1, x3, y3) +distance(x2, y2, x3, y3);
    
    return 0;
}
