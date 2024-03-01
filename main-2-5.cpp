#include <iostream>

extern bool is_descending(int array[], int n);
int main (void)
{
	int array[4] = {1,3,4,1};
	std::cout << "descending order: " << is_descending(array, 4) << std::endl;
}
