#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}


int     ft_strlen(char *str)
{
    int     len; 
    len = 0;
    if (!str)
        return (0);
    while (*str != '\0')
    {
        len++;
        str++;
    }
    return (len);
}

int     main()
{
    char test[5] = "Test";
    int a = ft_strlen(&test[0]);
    ft_putchar(a+'0');

    return 0;
}
