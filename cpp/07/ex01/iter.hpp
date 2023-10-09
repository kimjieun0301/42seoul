#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void iter(T *array, std::size_t length, void (*fn)(T&))
{
	for (std::size_t i = 0; i < length; i++)
	{
		fn(array[i]);
	}
}

template<typename T>
void print(T &str)
{
	std::cout << str << std::endl;
}

#endif