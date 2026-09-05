#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 10);
}
int     main(int argc, char *argv)
{
    ft_putchar("%c\n", argv[1]);
    ft_putchar("%c\n", argv[2]);
    ft_putchar("%c\n", argv[3]); 

    return 0;
}
