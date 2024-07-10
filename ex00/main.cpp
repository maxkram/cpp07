#include "whatever.hpp"

int main( void ) {
	int a = 2;
	int b = 3;

	::swap( a, b );

	std::cout << GREEN << "a = " << a << ", b = " << b << D << std::endl;
	std::cout << BLUE << "min( a, b ) = " << ::min( a, b ) << D << std::endl;
	std::cout << R << "max( a, b ) = " << ::max( a, b ) << D <<std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);

	std::cout << GREEN << "c = " << c << ", d = " <<  d << D << std::endl;
	std::cout << BLUE << "min( c, d ) = " << ::min( c, d ) << D << std::endl;
	std::cout << R << "max( c, d ) = " << ::max( c, d ) << D << std::endl;
	return 0;
}
