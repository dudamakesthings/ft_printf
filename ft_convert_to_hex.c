/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_convert_to_hex.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 13:25:58 by edribeir      #+#    #+#                 */
/*   Updated: 2023/11/22 15:54:38 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int nb_long(unsigned int n)
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

void ft_convert_to_hex(unsigned int n)
{
	char			*str;
	unsigned int	nb;
	unsigned int	count;

	count = nb_long(n);
	str = (char *)malloc((count + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n == 0)
		return (ft_putchar_fd('0', 1));
	while(n > 0)
	{
		n = n / 16;
	}
	
}