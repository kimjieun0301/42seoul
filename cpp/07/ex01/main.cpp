#include "iter.hpp"

int main( void )
{
	char char_Arry[5] = {'a', 'b', 'c', 'd', 'e'};
	int int_Arry[5] = {12, 22, 32, 42, 52};

	::iter<char>(char_Arry, 5, print);
	std::cout << std::endl;
	::iter<int>(int_Arry, 5, print);
    
    return 0;
}