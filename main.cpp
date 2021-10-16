#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double y, y1, x, y0, est;
    int k = 0; // number of iterations
    cout << "Input x = ";
    cin >> x;
    y = sqrt(x);
    y0 = x;
    y1 = (y0 + x / y0) / 2;
    est = 0.0004; // inaccuracy
    while (y1 - y > est){
        y0 = y1;
        y1 = (y0 + x / y0) / 2;
        k++;
    }
    cout << " y = " << y << endl << " y1 = " << y1 << endl;
    cout << " k = " << k << endl;

    return 0;
}
