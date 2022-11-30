#include "Span.hpp"

Span::Span() : _size(0){
}

Span::Span(unsigned int n) : _size(n) {
}

Span::Span(const Span &cpy){
	*this = cpy;
}

Span &Span::operator=(const Span &cpy) {
	if (this == &cpy)
		return *this;
	this->_size = cpy._size;
	this->_container = cpy._container;
	return (*this);
}

void Span::addNumber(int n) {
	if (_container.size() >= _size)
		throw vecIsFull();
	_container.push_back(n);

}

int Span::longestSpan() {
	if (_container.size() < 2)
		throw vecIsFull();
	return (*max_element(_container.begin(), _container.end()) - *min_element(_container.begin(), _container.end()));
}

int Span::shortestSpan() {

	vector<int> vec(_container);
	int min = INT_MAX;

	if (_container.size() < 2)
		throw vecIsFull();
	std::sort(vec.begin(), vec.end());
	for (unsigned int i = 0; i < vec.size(); i++){
		if (abs(vec[i] - vec[i + 1]) < min)
			min = abs(vec[i] - vec[i + 1]);
	}
	return min;
}

void Span::print_vec() {
	vector<int>::iterator it;
	it = _container.begin();
	while(it != _container.end()){
		cout << *it << " ";
		it++;
	}
	cout << endl;
}


Span::~Span() {
}

