/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarras <vdarras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:28:12 by vdarras           #+#    #+#             */
/*   Updated: 2024/04/02 18:41:30 by vdarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*buffer;
	int		i;

	i = 0;
	if (!str)
		return (NULL);
	while (*str)
	{
		if (*str == (char) c)
		{
			buffer = ((char *) str);
			i = 1;
		}
		str++;
	}
	if (i == 1)
		return ((char *) buffer);
	return (NULL);
}
/*
int main(void)
{
	const char *str = "Bonjour je suis un humain";
	int c = 115;
	printf("%s", ft_strrchr(str, c));
	return (0);
}
*/