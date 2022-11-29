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
	return (*max_element(_container.begin(), _container.end()) - *min_element(_container.begin(), _container.end()));
}

int Span::shortestSpan() {
	std::sort(_container.begin(), _container.end());
	//cout << "Begin: " << *_container.begin() << endl;
	//cout << "end: " << *_container.rbegin() << endl;
	if (_container.size() < 2)
		throw Span::vecIsFull();
	return (abs(*_container.begin() - *(++_container.begin())));
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

