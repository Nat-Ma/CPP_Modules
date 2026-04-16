#pragma once
#include <iostream>

template <typename T>
void swap(T &x, T &y) {
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
};

template <typename U>
U min(U x, U y) {
	if (x == y)
		return y;
	else if (x < y)
		return x;
	else
		return y;
};

template <typename V>
V max(V x, V y) {
	if (x == y)
		return y;
	else if (x > y)
		return x;
	else
		return y;
};
