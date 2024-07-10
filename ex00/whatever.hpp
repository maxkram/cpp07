#pragma once
#include <iostream>

#define D "\033[0m"
#define GRAY "\033[90m"
#define R "\033[31m"
#define C "\033[36m"
#define GREEN "\033[32m"
#define Y "\033[33m"
#define BLUE "\033[94m"
#define M "\033[35m"

template <typename T>
void swap(T &a, T &b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(T a, T b) {
	return a < b ? a : b;
}

template <typename T>
T max(T a, T b) {
	return a > b ? a : b;
}
