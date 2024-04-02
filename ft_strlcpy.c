/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarras <vdarras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:28:06 by vdarras           #+#    #+#             */
/*   Updated: 2024/04/02 20:17:18 by vdarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *destination, char *source, size_t dstsize)
{
	size_t	srclen;

	srclen = ft_strlen(source);
	if (!destination || !source)
		return (0);
	if (dstsize == 0)
		return (srclen);
	while (*source && dstsize - 1 > 0)
	{
		*destination = *source;
		dstsize--;
		destination++;
		source++;
	}
	if (dstsize > 0)
		*destination = '\0';
	return (srclen);
}
/*
int main(void)
{
	char dest[4];
	char *src = "Je suis";
	size_t len = ft_strlcpy(dest, src, 4);
	printf("Dest = %s  --- taille de source = %d", dest, len);
	return (0);
}
*/