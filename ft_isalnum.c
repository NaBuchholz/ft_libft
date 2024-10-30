/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:59:33 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/10/14 12:39:01 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	int	result;

	result = 0;
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		result = 1;
	else if (c >= 48 && c <= 57)
		result = 1;
	return (result);
}