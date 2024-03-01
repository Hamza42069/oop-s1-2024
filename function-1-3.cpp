 int num_count(int array[], int n, int number)
 {
	int i;
	int count;

	i = 0;
	count = 0;

	if (n < 1)
	{
		return (0);
	}
	while (i < n)
	{
		if (array[i] == number)
		{
			count++;
		}
		i++;
	}
	return (count);
 }