#include "easyfind.hpp"

int main()
{
	int random;
	int arr[] = {1, 11, 9, 4 ,5, 6, 7, 12, 8, 10};
	vector<int> vec(arr, arr + 10);
	srand((unsigned) time(NULL));
	for (int i = 0; i < 3; i++){
		random = rand() % 12;
		easyfind(vec, random);
	}
}
