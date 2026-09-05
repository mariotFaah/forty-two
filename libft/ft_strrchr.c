char	*ft_strrchr(char *s, int c)
{
	int	ns[];
	int 	i;
	i = 0;
	while (*s != '\0')
	{
		if (int(*s) == c)
		{
			ns[i] = *s;
			i++;	
		}
		s++;
	}
	return ns;
}
