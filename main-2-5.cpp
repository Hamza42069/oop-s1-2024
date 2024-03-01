#include <iostream>

extern bool is_descending(int array[], int n);
int main (void)
{
	int array[4] = {5, 4, 3, 2};
	std::cout << "descending order: " << is_descending(array, 4) << std::endl;
}
