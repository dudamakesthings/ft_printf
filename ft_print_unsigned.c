/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_unsigned.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/23 11:01:25 by edribeir      #+#    #+#                 */
/*   Updated: 2023/11/27 15:01:29 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	nb_len(unsigned int nb)
{
	unsigned int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

int	ft_utoa(unsigned int nb)
{
	char			*str_number;
	unsigned int	len;
	unsigned int	str_len;

	len = nb_len(nb);
	str_number = malloc((len + 1) * sizeof(char));
	if (str_number == NULL)
		return (0);
	str_number[len] = '\0';
	if (nb == 0)
		str_number[0] = '0';
	while (nb > 0)
	{
		len--;
		str_number[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	ft_putstr_fd(str_number, 1);
	str_len = ft_strlen(str_number);
	free(str_number);
	return (str_len);
}

// int main ()
// {
// 	printf("\n%d", ft_utoa(123));
// }