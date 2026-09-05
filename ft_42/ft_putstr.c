#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    while (*str != '\0')
    {
        ft_putchar(*str);
        str++;
    }
}

int     main()
{
    char test[5] = "Test";
    ft_putstr(&test[0]);
    return 0;
}


