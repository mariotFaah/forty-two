#include <stdio.h>
{
    int     i;

    if (nb <= 0)
        return (0);
    i = 1;
    while (i <= 46340 && i * i <= nb)
    {
        if (i*i == nb)
            return (i);
        i++;
    }
    return (0);
}
