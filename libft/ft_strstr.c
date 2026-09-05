char	*strstr(const char *haystack, const char *needle)
{
	while (*haystack != '\0')
	{
		while (*needle != '\0')
		{
			if (*haystack == *needle)
				return haystack;
			needle++;
		}
		haystack++;
	}
}
