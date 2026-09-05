char	*ft_strncat(char *dst, char *src, size_t ssize)
{
	char *s;
	char *d;
	size_t i;
	s = (char*)src;
	d = (char*)dst;
	i = 0;
	while(i < ssize)
	{
		*d = *s;
		s++;
		d++;
		i++;
	}
	//*d+ssize= '\0';// I want to put '\0' at the end of the dest+1
	return dest;
}
