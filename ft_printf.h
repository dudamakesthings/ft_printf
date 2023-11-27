/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 09:47:11 by edribeir      #+#    #+#                 */
/*   Updated: 2023/11/27 18:49:50 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./Libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int	ft_utoa(unsigned int nb);
int	ft_ithex(unsigned int n, char const *format);
int	ft_pointhex(unsigned long n, char *hex);
int	ft_printf(const char *format, ...);

#endif