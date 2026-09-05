#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;
	i = 0;
	while (i < length)
	{
		*f(i);
		i++;
	}
}
int	*ft_increment(int a)
{
	a++;
	return ;
}
int	main()
{
	
	return (0);
}
