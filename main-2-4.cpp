#include <iostream>

extern bool is_ascending(int array[], int n);

int main (void)
{
	int array [4] = {1, 2 ,5, 2};
	std::cout << "asscending order: " << is_ascending(array, 4) << std::endl;
}
