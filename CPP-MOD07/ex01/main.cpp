#include "iter.hpp"

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	iter(arr, 5, increase);
	for (int i = 0; i < 5; i++)
		cout << arr[i] << ", ";
	cout << endl << endl;
	float arr1[] = {1.43, 2.12, 3.4, 4.1, 5.6556};
	iter(arr1, 5, increase);
	for (int i = 0; i < 5; i++)
		cout << arr1[i] << ", ";
	cout << endl << endl;

	string *arr2 = new string[3];
	arr2[0] = "Hi";
	arr2[1] = "Hello";
	arr2[2] = "How are you";
	iter(arr2, 3, print_it);
	cout << endl << endl;
}
