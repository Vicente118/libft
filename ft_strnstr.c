/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarras <vdarras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:28:11 by vdarras           #+#    #+#             */
/*   Updated: 2024/04/02 18:41:09 by vdarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	int		length;
	char	*buff1;
	char	*buff2;

	if (!str1 || !str2)
		return (NULL);
	if (*str2 == '\0')
		return ((char *) str1);
	buff1 = (char *) str1;
	buff2 = (char *) str2;
	i = 0;
	length = ft_strlen(buff2);
	while (buff1[i] != '\0' && (i + length) <= n)
	{
		if (ft_strncmp((str1 + i), str2, length) == 0)
			return ((char *)(buff1 + i));
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	const char *str1 = "";
	const char *str2 = "vv";
	printf("%s",ft_strnstr(str1, str2, 14));
	return (0);
}
*/