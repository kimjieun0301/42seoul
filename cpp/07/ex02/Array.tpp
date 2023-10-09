#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	arr = new T;
	len = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	arr = new T[n];
	len = n;
}

template <typename T>
Array<T>::Array(const Array<T> &obj)
{
	len = obj.size();
	arr = new T[len];
	for (size_t i = 0; i < len; i++)
		arr[i] = obj.arr[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T> &obj)
{
	if (this != &obj)
	{
		delete [] arr;
		len = obj.size();
		arr = new T[len];
		for (size_t i = 0; i < len; i++)
			arr[i] = obj.arr[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array()
{
	delete [] arr;
}

template <typename T>
T& Array<T>::operator[](size_t i)
{
	if (i >= 0 && i < len)
		return arr[i];
	else
		throw std::out_of_range("Index out of range");
}

template <typename T>
size_t Array<T>::size() const
{
	return len;
}

#endif