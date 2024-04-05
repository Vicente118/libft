/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarras <vdarras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:27:57 by vdarras           #+#    #+#             */
/*   Updated: 2024/04/05 15:51:13 by vdarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	index;

	if (!str)
		return (NULL);
	if (c == '\0')
	{
		index = ft_strlen(str);
		return ((char *)str + index);
	}
	while (*str)
	{
		if (*str == (char) c)
		{
			return ((char *) str);
		}
		str++;
	}
	return (NULL);
}
/*
int main(void)
{
	const char *str = "Bonjour je suis un humain";
	int c = 111;
	printf("%s", ft_strchr(str, c));
	return (0);
}
*/