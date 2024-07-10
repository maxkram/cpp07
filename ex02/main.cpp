#include "Array.hpp"

int main(void)
{
    Array<int> array(10);

    try {
        array[6] = 8;
        std::cout << array[6] << std::endl;
        std::cout << array[50] << std::endl;
    }
    catch(std::exception &e) {
        std::cout << "Index out of bounds." << std::endl;
    }
    return (0);
}