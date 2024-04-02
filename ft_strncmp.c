/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarras <vdarras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:28:09 by vdarras           #+#    #+#             */
/*   Updated: 2024/04/02 17:13:27 by vdarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	if (!str1 || !str2)
		return (0);
	i = 1;
	while (*str1 && (*str1 == *str2) && i < n)
	{
		str1++;
		str2++;
		i++;
	}
	return (*str1 - *str2);
}
/*
int main(void)
{
	const char *str1 = "Bonjour";
	const char *str2 = "Bonsoir";
	printf("%d", ft_strncmp(str1, str2, 3));
	return (0);
}
*/