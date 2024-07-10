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
void iter(T *array, std::size_t size, void (*f)(T const &input)) {
	if (!array || !f || size == 0)
		return;
	std::size_t i = 0;
	while (i < size) {
			f(array[i]);
			++i; 
	}
}

template <typename T>
void print(T const &input) {
	std::cout << R << input << D << std::endl;
}