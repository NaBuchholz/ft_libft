/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:46:37 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/10/24 11:35:06 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putendl_fd_1(char *s, int fd)
{
	int	count;

	if (fd < 0 || s == NULL)
		return (1);
	count = 0;
	while (s[count])
	{
		write(fd, &s[count], 1);
		count++;
	}
	write(fd, "\n", 1);
	return (1);
}
