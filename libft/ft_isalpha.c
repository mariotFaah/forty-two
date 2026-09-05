#include <stdio.h>
int	ft_isalpha(char c)
{
	char a, aa;
	a = 'a';
	aa = 'A';
	while (a <= 'a')
	{
		if (c == a)
			return (0);
		a++;
	}
	while (aa <= 'A')
	{
		if (c == aa)
			return (0);
		aa++;
	}
}

int 	main()
{
	printf("%d", ft_isalpha('C'));
	return (0);
}
