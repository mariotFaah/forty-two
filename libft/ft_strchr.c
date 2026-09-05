char	*ft_strchr(char *s, int c)
{
	while (*s != '\0')
	{
		if ((int)*s == c)
		{
			return s;
		}
		s++;
	}
}
