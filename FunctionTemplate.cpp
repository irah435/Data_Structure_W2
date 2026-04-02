#include <iostream>
using namespace std;

// Template prefix defines T as a generic datatype
template<class T>
T findMin(T a, T b)
{
	if (a < b) {
		return a; 
	}
	else {
		return b;
	}
}

int main()
{
	// The compiler automatically determines the type for T
	cout << "Smaller value integer: " << findMin(2, 3) << endl; // T becomes int
	cout << "Smaller value char: " << findMin('H','Z') << endl; // T becomes double
	return 0;

}
