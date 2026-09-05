int	ft_strlen(char *s)
{
	int count;
	count = 1;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count - 1);
}
