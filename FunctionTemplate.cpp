#include <iostream>
using namespace std;

//Template prefix defines T as a generic datatype 
template<class T>
T sum(T a,T b)
{
	T result;
	result = a + b;
	return result;
}

int main() {
	// The compiler automatically determine the type for T 
	cout << "Answer integer: " << sum(2, 3) << endl; // T become int 
	cout << "Answer double: " << sum(1.2, 1.3) << endl; // T become double 
	return 0;
}