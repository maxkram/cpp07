#pragma once
#include <iostream>

const std::string RESET_COLOR = "\033[0m";
const std::string RED_COLOR = "\033[31m";
const std::string GREEN_COLOR = "\033[32m";
const std::string BLUE_COLOR = "\033[34m";

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
	std::cout << GREEN_COLOR << input << RESET_COLOR << std::endl;
}