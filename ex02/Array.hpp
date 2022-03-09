#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template <typename T>
class Array
{
	private:
		T*				_array;
		unsigned int	_size;

	public:
		Array();
		Array(unsigned int size);
		Array(const Array<T>& other);
		~Array();

		Array<T>&	operator=(const Array<T>& other);
		T&			operator[] (unsigned int index) const;

		unsigned int	size(void) const;

		class OutOfBoundsException: public std::exception
		{
			virtual const char*	what() const throw();
		};
};

#endif

#include "Array.tpp"
