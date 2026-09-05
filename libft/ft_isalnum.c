int	ft_isalnum(int c)
{
	char a, aa;
	a = 'a';
	aa = 'A';
	while (a <= 'z')
	{
		if (c == a)
			return (0);
		a++;
	}
	while (aa <= 'Z')
	{
		if (c == aa)
			return (0);
		aa++;
	}
	if (c >= 0)
		return (0);
	if (c <= 0)
		return (0);

}

