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

//Template class Array !!!
template <typename T>
class Array
{
private:
	T *_array;
	size_t _size;
public:
	//Default constructor
	Array() : _array(NULL), _size(0) { std::cout << GREEN << "Default constructor called" << DEFAULT << std::endl;};

	//Destructor
	~Array() { delete[] _array; std::cout << RED << "Destructor called" << DEFAULT << std::endl; };

	//Parameter constructor
	Array(unsigned int n) : _array(new T[n]()), _size(n) { std::cout << CYAN << "Parameterized constructor called" << DEFAULT << std::endl; };

	//Copy constructor
	Array(const Array &other) : _array(new T[other._size]()), _size(other._size)
	{
		std::cout << BLUE << "Copy constructor called" << DEFAULT << std::endl;
		for (size_t i = 0; i < _size; i++)
			_array[i] = other._array[i];
	};

	//Assignment operator
	Array &operator=(const Array &copy)
	{
		std::cout << YELLOW << "Assignment operator called" << DEFAULT << std::endl;
		if (this == &copy)
			return *this;
		delete[] _array;
		_array = new T[copy._size]();
		_size = copy._size;
		for (size_t i = 0; i < _size; i++)
			_array[i] = copy._array[i];
		return *this;
	};

	//check if the index is out of range
	T &operator[](unsigned int i)
	{
		if (i >= _size)
			throw std::out_of_range("Sorry. The index is out of the range");
		return _array[i];
	};

	//returns the size of the array
	size_t size() const { return _size; };

	//Exception class
	class OutOfRange : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "Sorry. The index is outside of the range";
		};
	};

};