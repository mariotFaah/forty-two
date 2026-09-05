char	*ft_strncpy(char dst[], char *src[], size_t dsize)
{
	while (*src != '\0')
	{
		*src = *dst;
		src++;
		++dst;
	}
	return dst;
}
