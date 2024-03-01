bool is_descending(int array[], int n)
{
	int i;

	i = 1;
	while (i < n)
	{
		if (array[i] > array[i - 1])
		{
			return (false);
		}
		i++;
	}
	return (true);
}

