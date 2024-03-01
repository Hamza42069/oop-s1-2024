#include <iostream>

extern int min_element(int array[], int n);

int	main(void)
{
	int array[6] = {9, 1, 3, 23000, -239829083, 8};
	std::cout << "min number:" << min_element(array, 6) << std::endl;
	return (0);
}
