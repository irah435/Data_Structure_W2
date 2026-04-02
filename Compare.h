#ifndef Compare_H
#define Compare_H

template <class T>
class Compare {
public:
	Compare();
	~Compare();
	T getMin(T a, T b);
};

// Class implementation starts here
template <class T>
Compare<T>::Compare() {}

template <class T>
Compare<T>::~Compare() {}

template <class T>
T Compare<T>::getMin(T a, T b) {
	if (a < b) {
		return a;
	}
	else {
		return b;
	}
}
#endif
