#include "iter.hpp"

int main()
{
	int arr0[] = {42, 24, 2};
	iter(arr0, 3, print);

	float arr1[] = {0.42f, 42.42f, 24.24f};
	iter(arr1, 3, print);

	std::string arr2[] = {"42Quebec", "is", "over", "for", "ever"};
	iter(arr2, 5, print);

	double arr3[] = {0.452425, 1.456, 2.1451435};
	iter(arr3, 3, print);
	return 0;
}