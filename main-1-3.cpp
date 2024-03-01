#include <iostream>

extern int num_count(int array[], int n, int number);

int main(void)
{
	int array[6] = {1,3,3,4,3};
	std::cout << "number of times: " << num_count(array, 5, 1) << std::endl;
	return (0);
}