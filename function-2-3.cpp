
#inculde <stdio.h>

void two_five_nine(int array[], int n)
{
	int i;
	int nine;
	int five;
	int two;

	i = 0;
	nine = 0;
	five = 0;
	two = 0;
	while(i < n)
	{
		if (array[i] == 9)
		{
			nine++;
		}
		else if (array[i] == 5)
		{
			five++;
		}
		else if (array[i] == 2)
		{
			two++;
		}
		i++;
	}
	printf("2:%d;5:%d;9:%d;",two,five,nine);
}
