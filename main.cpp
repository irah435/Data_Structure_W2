#include <iostream>
#include "Compare.h"

using namespace std;
int main() {
	Calculator<int> CalcInt; // Specific instance for int
	Calculator<float> CalcFloat; // Specific instance for float

	int a, b;
	float c, d;

	cout << "Enter 2 integers: ";
	cin >> a >> b;
	cout << "Integer Answer: " << CalcInt.sum(a, b) << endl;

	cout << "Enter 2 floats: ";
	cin >> c >> d;
	cout << "Float Answer: " << CalcFloat.sum(c, d) << endl;

	return 0;
}