/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarras <vdarras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:28:04 by vdarras           #+#    #+#             */
/*   Updated: 2024/04/05 15:37:38 by vdarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *destination, char *source, size_t size)
{
	size_t		j;
	size_t		lendest;
	size_t		lensrc;

	j = 0;
	lendest = ft_strlen(destination);
	lensrc = ft_strlen(source);
	if (!destination || !source)
		return (0);
	if (size <= lendest)
		return (size + lensrc);
	while (lendest + j < size - 1 && source[j])
	{
		destination[lendest + j] = source[j];
		j++;
	}
	destination[lendest + j] = '\0';
	return (lendest + lensrc);
}
/*
int main(void)
{
	char destination[185] = "Je suis un";
	char src[] = " etre vivant !";
	printf("%zu",ft_strlcat(destination, src, 21));
	return (0);
}
*/