/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 09:48:24 by edribeir      #+#    #+#                 */
/*   Updated: 2023/11/22 13:39:34 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	char	*str;
	int		write_return;
	va_list	args;

	va_start(args, format);
	va_end(args);
	write_return = write(1, &str, ft_strlen(str));
	return (write_return);
}
