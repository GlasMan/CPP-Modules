#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::out_of_range;
using std::string;

template<typename T>
class Array
{
	private:
		T *_array;
		unsigned int length;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &cpy);
		Array &operator=(const Array &cpy);
		T const &operator[](unsigned int index) const;
		T &operator[](unsigned int index);
		unsigned int size() const;
		const char *out_of_index();
		~Array();
};

template<typename T>
Array<T>::Array() : length(0){
	_array = new T;
	length = 1;
}

template<typename T>
Array<T>::Array(unsigned int n) {
	if (n != 0)
		_array = new T[n]();
	length = n;
}

template<typename T>
Array<T>::Array(const Array<T> &cpy) : length(0){
	(*this) = cpy;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &cpy) {
	if (this->length != 0)
		delete [] this->_array;
	unsigned int size = cpy.length;
	_array = new T[size];
	for (unsigned int i = 0; i < size; i++)
		_array[i] = cpy._array[i];
	return (*this);
}

template<typename T>
T &Array<T>::operator[](unsigned int index){
	if ((int)index < 0 || index >= length)
		throw out_of_range ("Error! out of range");
	return (this->_array[index]);
}

template<typename T>
T const &Array<T>::operator[](unsigned int index) const{
	return (operator[](index));
}

template<typename T>
Array<T>::~Array() {
	if (length != 0)
		delete [] _array;
}

template<typename T>
unsigned int Array<T>::size() const {
	return this->length;
}

template<typename T>
const char *Array<T>::out_of_index() {
	return "Error! Out of index";
}

#endif
