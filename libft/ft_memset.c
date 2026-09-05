#include <stdio.h>

void *ft_memset(void *ptr, int value, size_t count)
{
	unsigned char	*p;
	size_t		i;

	p = (unsigned char *)ptr;
	i = 0;
	while (count > i)
	{
		*p = (unsigned char)value;
		p++;
		i++;
	}
	return ptr;
}

int main()
{
	int arr[] = {1,2,3,4,3};
        int	val;
	size_t length;
	val 	= 0;
        length	= 5;
	ft_memset(arr, val, sizeof(int)*5);
	for (int i = 0; i < length; i++)
	{
		printf("%d", arr[i]);
	}	
	return 0;
}
