char	*ft_strcat(char *dst, char *src)
{
	while(*src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
	}
	return dst;
}
