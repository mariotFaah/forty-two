int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	intt len1;
	int len2;
	len1 = 0;
	len2 = 0;
	while (*s1 != '\0')
	{
		len1++;
	}
	while (*s2 != '\0')
	{
		len2++;
	}
	if (len1 == len2)
	{
		return 0;
	}
	else if (len1 < len2)
	{
		return -1;
	}
	else if (len1 > len2)
	{
		return 2;
	}
}
