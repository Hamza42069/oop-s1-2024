int min_element (int array[], int n)
{
	int i;
	int min;

	i = 0;
	min = array[0];
	while(i < n)
	{
		if (array[i] < min)
		{
			min = array[i]
		}
		i++;
	}
	return (min);
}
