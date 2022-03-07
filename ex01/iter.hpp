#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void	iter(const T* array, size_t length, void function(const T&))
{
	for (size_t i = 0; i < length; i++)
		function(array[i]);
}

#endif
