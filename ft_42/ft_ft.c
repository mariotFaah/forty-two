#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void 		ft_ft(int *nbr)
{
	*nbr = 42;
	
}

int     main()
{
    int n;

    ft_ft(&n);
    
    ft_putchar(n / 10 + '0');
    ft_putchar(n % 10 + '0');

    return 0;
}
