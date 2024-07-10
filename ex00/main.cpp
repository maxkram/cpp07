#include "whatever.hpp"

int main( void ) {
    int a = 2;
    int b = 3;

    ::swap( a, b );

    std::cout << GREEN_COLOR << "a = " << a << ", b = " << b << RESET_COLOR << std::endl;
    std::cout << BLUE_COLOR << "min( a, b ) = " << ::min( a, b ) << RESET_COLOR << std::endl;
    std::cout << RED_COLOR << "max( a, b ) = " << ::max( a, b ) << RESET_COLOR <<std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);

    std::cout << GREEN_COLOR << "c = " << c << ", d = " <<  d << RESET_COLOR << std::endl;
    std::cout << BLUE_COLOR << "min( c, d ) = " << ::min( c, d ) << RESET_COLOR << std::endl;
    std::cout << RED_COLOR << "max( c, d ) = " << ::max( c, d ) << RESET_COLOR << std::endl;
    return 0;
}
