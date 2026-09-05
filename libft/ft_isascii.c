int	ft_isascii(int c)
{
	if(c <=  'z' || c <= 'Z' || c <= '9')
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
