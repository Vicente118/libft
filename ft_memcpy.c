/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarras <vdarras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:27:43 by vdarras           #+#    #+#             */
/*   Updated: 2024/04/02 16:27:44 by vdarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	size_t	i;

	if (!destination || !source)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		*(unsigned char *)(destination + i) = *(unsigned char *)(source + i);
		i++;
	}
	return (destination);
}
/*
int main(void)
{
	char *str = "abcdef";
	char str1[35];
	char *final = ft_memcpy(str1, str, sizeof(str) + 1);
	for(int i = 0; i < 6; i++)
		printf("%c", final[i]);
	return (0);
}
*/