#include <iostream>

extern void two_five_nine (int array[], int n);

int main (void)
{
	int array[13] = {2,1,2,5,6,9,9,5,2,9};
	two_five_nine(array, 10);
}
