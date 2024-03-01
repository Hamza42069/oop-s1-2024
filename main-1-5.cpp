#include <iostream>


extern int count_evens(int number);

int main (void)
{
	std::cout << "even count: " << count_evens(12) << std::endl;
	return (0);
}