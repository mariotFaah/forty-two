int     *ft_range(int min, int max)
{
    if (min >= max)
        return (NULL);

    int     *arr;
    int     size;
    int i;
    i = 0;
    size = max - min;
    arr = (int *)malloc(size * sizeof(int));
    while (min < max)
    {
        arr[i] = min + i;
        min++;
        i++;
    }
    return (arr);
}
