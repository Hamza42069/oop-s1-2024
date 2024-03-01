#include <iostream>

extern double array_mean(int array[], int n);

int main(void)
{
	int array[6] = {1,2,3,4,6};
	std::cout << "The average is: " << array_mean(array, 5) << std::endl;
	return (0);
}