void	*memccpy(void dest[], const void src[], int c, size_t n)
{
	while (src[i] != c)
	{
		src+i = dest+i;
		i++;
		src++;
	}
	return dest;
}
