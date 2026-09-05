int	ft_isdigit(int c)
{
	char zero;
	zero = 0;

	while(zero <= '9')
	{
		if (zero == c)
		{
			return 0;
		}
		else 
		{
			return 1;
		}
		zero++;
	}
}
