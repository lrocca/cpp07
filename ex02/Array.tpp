#include "Array.hpp"

Array::Array() {
}

Array::~Array() {
}

Array::Array(const Array& other) {
	*this = other;
}

Array&	Array::operator=(const Array& other) {
	if (this != &other) {
	}
	return *this;
}
