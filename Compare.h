#ifndef CALCULATOR_H
#define CALCULATOR_H

template <class T>
class Calculator {
public:
	Calculator();
	~Calculator();
	T sum(T x, T y);
};

// Class implementation starts here
template <class T>
Calculator<T>::Calculator() 
{

}
template <class T>
Calculator<T>::~Calculator() 
{

}
template <class T>
T Calculator<T>::sum(T x, T y) {
	return x + y;
}

#endif