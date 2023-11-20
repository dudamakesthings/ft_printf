
#include "ft_printf.h"

int	ft_print_char(int i)
{
	write(1, &i, 1);
	return (1);
}

int	ft_print_str(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 7);
		return (7);
	}
	while (str[i] != "\0")
	{ 
		ft_print_char(str[i]);
		i++;
	}
	return (i);
}

int	ft_print_int(int n)
{
	char	*str;
	int		counter;

	str = ft_itoa(n);
	if	(!str)
		return (0);
	counter =ft_strlen(str);
	ft_print_str(str);
	free(str);
	return (counter);
}
