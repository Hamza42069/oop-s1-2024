bool is_ascending(int array[], int n)
{
	int i;
	
	i = 0;
	while (i < n)
	{
		if (array[i] < array[i-1])
		{
			return(false);
		}
		i++;
	}
	return (true);
}

