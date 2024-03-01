int sum_two_arrays(int array[], int secondarray[], int n)
{
	int i;
	int j;
	int sum;

	i = 0;
	j = 0;
	sum = 0;
	while(i < n)
	{
		sum = sum + array[i] + secondarray[j];
		i++;
		j++;
	}
	return(sum);
}