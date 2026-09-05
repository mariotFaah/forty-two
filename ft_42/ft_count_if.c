int	ft_count_if(char **tab, int(*f)(char*))
{
	int 	count;
	count = 0;
	while ( != '\0')
	{
		*f();
		count++;
	}
	return (count);
}	
