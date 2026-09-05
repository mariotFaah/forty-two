/**
 * We include the ft_strlen(), because we have just write this
 * then we can use it properly
 * I don't know how to import it that suppose that we import this one moment
 */

int	ft_strcmp(char *s1, char *s2)
{
	if (ft_strlen(&s1) < ft_strlen(s2))
	{
		return (-1);
	}
	else if (ft_strlen(&s1) == ft_strlen(&s2))
	{
		return (0);
	}
	else if (ft_strlen(&s1) > ft_strlen(&s2))
	{
		return (1);
	}
}
