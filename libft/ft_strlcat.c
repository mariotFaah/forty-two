size_t	ft_strlcat(char *dst, char *src, size_t dsize)
{
	size_t len;
	len = 0;
	while(len < dsize)
	{
		*src = *dst;
		dst++;
		src++;
		len++;
	}
	return len+1;
}
