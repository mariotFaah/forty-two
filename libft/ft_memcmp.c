int	ft_memcmp(const void s1[], const void s2[], size_t n)
{
	if (s1 < s2)
	{
		return -1;
	}
	else if (s1 == s2)
	{
		return 0;
	}
	else if (s1 > s2)
	{
		return 1;
	}
}
