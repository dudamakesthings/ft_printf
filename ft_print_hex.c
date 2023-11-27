/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_hex.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 13:25:58 by edribeir      #+#    #+#                 */
/*   Updated: 2023/11/27 18:49:12 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	nb_long(unsigned long n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		n = n / 16;
		count++;
	}
	return (count);
}

int	ft_ithex(unsigned int n, char const *format)
{
	char			*hex;
	unsigned int	len;
	char			*hex_base;
	unsigned int	counter;

	if (*format == 'X')
		hex_base = "0123456789ABCDEF";
	else if (*format == 'x')
		hex_base = "0123456789abcdef";
	len = nb_long(n);
	hex = (char *)malloc((len + 1) * sizeof(char));
	if (hex == NULL)
		return (0);
	hex[len] = '\0';
	while (n > 0)
	{
		len--;
		hex[len] = hex_base[n % 16];
		n = n / 16;
	}
	ft_putstr_fd(hex, 1);
	counter = ft_strlen(hex);
	free(hex);
	return (counter);
}

int	ft_pointhex(unsigned long n, char *hex)
{
	unsigned int	len_n;
	char			*str_phex;

	len_n = nb_long(n) + 2;
	str_phex = malloc((len_n + 1) * sizeof(char));
	if (str_phex == NULL)
		return (0);
	if (n == 0)
	{
		ft_putstr_fd("nil", 1);
		return (ft_strlen("nil"));
	}
	str_phex[0] = '0';
	str_phex[1] = 'x';
	str_phex[len_n] = '\0';
	while (n > 0)
	{
		str_phex[--len_n] = hex[n % 16];
		n = n / 16;
	}
	ft_putstr_fd(str_phex, 1);
	len_n = ft_strlen(str_phex);
	free(str_phex);
	return (len_n);
}
