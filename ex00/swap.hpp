#ifndef SWAP_HPP
# define SWAP_HPP

template <typename T>
void	swap(T& x, T& y)
{
	T z = x;
	x = y;
	y = z;
}

#endif
