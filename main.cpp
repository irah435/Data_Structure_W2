#include <iostream>
#include "Compare.h"
using namespace std;

int main() {
    Compare<int> CalcInt;
    Compare <double> CalcDouble;
    int a, b; 
    double da, db;

    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Minimum int: " << CalcInt.getMin(a, b) << endl;

    cout << "Enter two decimal: ";
    cin >> da >> db;
    cout << "Minimum double: " << CalcDouble.getMin(da, db) << endl;

    return 0;
}