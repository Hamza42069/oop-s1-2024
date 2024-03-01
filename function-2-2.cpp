int max_element(int array[], int n)
{
	int max;
	int i;

	max = array[0];
	i = 0;
	while(i < n)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
		i++;
	}
	return (max);
}
