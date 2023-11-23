/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   teste.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 10:23:11 by edribeir      #+#    #+#                 */
/*   Updated: 2023/11/23 11:54:19 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"



size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	if (n >= 0 && n <= 9)
	{
		n = n + '0';
		ft_putchar_fd(n, fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}

void	function_test(char *arg, ...)
{
	va_list			ap;
	int				d;
	int				c;
	char			*s;
	// unsigned int	u;

	va_start(ap, arg);
	while (*arg != '\0')
	{
		if (*arg == '%')
		{
			arg++;
			if (*arg == '%')
				ft_putchar_fd('%', 1);
			if (*arg == 'c')
			{
				c = va_arg(ap, int);
				write(1, &c, 1);
			}
			if (*arg == 'd' | *arg == 'i')
			{
				d = va_arg(ap, int);
				ft_putnbr_fd(d, 1);
			}
			if (*arg == 's')
			{
				s = va_arg(ap, char *);
				ft_putstr_fd(s, 1);
			}
			// if (*arg == 'X')
			// {
			// 	X = va_arg(ap, int);
			// }
			// if (*arg == 'x')
			// {
			// 	x = va_arg(ap, int);
			// }
			// if (*arg == 'p')
			// {
			// 	p = va_arg(ap, void *);
			// }
			// if (*arg == 'u')
			// {
			// 	u = va_arg(ap, unsigned int);
			// 	ft_putstr_fd(ft_utoi(u), 1);
			// }
		}
		else if (*arg == '\n')
			write (1, "\n", 2);
		else
			ft_putchar_fd(*arg, 1);
		arg++;
	}
	va_end(ap);
}

int main()
{
	function_test("%c%c%d%c\n", 'a', 'b', 3, '%');
	function_test("%c%c%d%s\n", 'a', 'b', 3, "bla");
	function_test("ble%c%c%i%sbla%%%u", 'a', 'b', 120, "foo", 111);
	function_test("\n%%\n");
	printf("ble%c%c%i%sbla%%%u\n", 'a', 'b', 120, "foo", 111);
	printf("%%\n");
}