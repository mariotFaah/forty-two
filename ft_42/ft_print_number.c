#include <unistd.h>

void     ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_number(void)
{
    char c = '0';
    while (c <= '9')
    {
        ft_putchar((c));
        c++;
    }
}

int     main()
{
    ft_print_number();
    return 0;
}
