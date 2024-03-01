#include <iostream>

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main(void)
{
	int array[6] = {1,3,3,4,3};
	int array2[6] = {1,4,5,6,7};
	std::cout << "adding two values " << sum_two_arrays(array, array2, 5) << std::endl;
	return (0);
}	