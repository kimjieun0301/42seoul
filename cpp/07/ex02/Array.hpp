#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <stdexcept>

template <typename T>
class Array
{
	private:
		T 		*arr;
		std::size_t	len;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &obj);
		Array& operator=(const Array &obj);
		~Array();
		T& operator[](std::size_t i);
		std::size_t size() const;
};

#include "Array.tpp"

#endif