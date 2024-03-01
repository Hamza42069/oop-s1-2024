int count_evens(int number)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i <= number)
	{
		if (i % 2 == 0)
		{
			j++;
		}
		i++;
	}
	return (j);

}