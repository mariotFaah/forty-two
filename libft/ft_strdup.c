char	*ft_strdup(const char *s)
{
	char *new_s[];
	int i;
	new_s = (char*)malloc(sizeof(s) * 2);
	i = 0;
	while (i < 2)
	{
		*new_s + i = *s;
		new_s++;
	}
	free(new_s);
	return new_s

}
