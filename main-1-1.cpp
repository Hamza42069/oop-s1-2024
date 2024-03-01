#include <iostream>

extern int array_sum(int array[], int n);

int main (void)
{
	int array[6] = {1,2,3,4,6};
	std::cout << "The sum is: " << array_sum(array, 6) << std::endl;
	return (0);
}