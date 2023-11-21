/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/24 09:55:32 by edribeir      #+#    #+#                 */
/*   Updated: 2023/11/21 12:03:15 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, &s, ft_strlen(s));
	// int	i;

	// i = 0;
	// if (s != NULL)
	// {
	// 	while (s[i] != '\0')
	// 	{
	// 		write (fd, &s[i], 1);
	// 		i++;
	// 	}
	// }
}

// int main()
// {
//     ft_putstr_fd("", 1);
// }
