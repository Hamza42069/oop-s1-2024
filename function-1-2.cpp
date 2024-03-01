double array_mean(int array[], int n)
{
	double sum;

	sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum  += array[i];
	}
	sum = sum / n;
	return (sum);
}