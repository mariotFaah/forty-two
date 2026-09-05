int    ft_iterative_factorial(int n) 
{
    int res;
    if (n < 0) { 
        return 0;
    }

    res = 1;
    while (n > 0)
    {
        res = res * n;
        n--;
    }
    return res;
}


