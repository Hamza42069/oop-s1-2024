#include <iostream>

extern int max_element(int array[], int n);

int main(void)
{
	int array[5] = {1,2500,2,4,5};
	std::cout << "Max num: " << max_element(array, 5) <<std::endl;
}
