#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array(): _array(nullptr), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n): _array(nullptr), _size(n)
{
	_array = new T[_size];
}

template <typename T>
Array<T>::Array(const Array<T>& other): _array(nullptr), _size(other._size)
{
	_array = new T[_size];
	*this = other;
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array<T>& other)
{
	if (this != &other)
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = other._array[i];
	return *this;
}

template <typename T>
T&	Array<T>::operator[] (unsigned int index) const
{
	if (index >= _size || index < 0)
		throw OutOfBoundsException();
	return _array[index];
}

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return _size;
}

template <typename T>
const char*	Array<T>::OutOfBoundsException::what() const throw() {
	return "index out of bounds";
}

#endif
