#include "serialization.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}




int main()
{
	Data *a = new Data;
	a->mem = 10000;
	a->name = "Ahmet";
	Data *b = new Data;
	b->mem = 999999;
	b->name = "Mehmet";

	cout << "a = address: " << a  << ", a value: " << a->mem << ", " + a->name << endl;
	cout << "b = address: " << b  << ", b value: " << b->mem << ", " + b->name << endl;
	b = deserialize(serialize(a));
	cout << "After serialize and deserialize" << endl << endl;
	cout << "b = address: " << b  << ", b value: " << b->mem << ", " + b->name << endl;

	delete a;
}
