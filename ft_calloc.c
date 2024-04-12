/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarras <vdarras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:27:25 by vdarras           #+#    #+#             */
/*   Updated: 2024/04/11 18:35:52 by vdarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;
	size_t	buffer;
	size_t	i;

	buffer = n * size;
	i = 0;
	if (n == 0 || size == 0)
		return (ft_strdup(""));
	if (size != buffer / n)
		return (NULL);
	ptr = malloc(n * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, n * size);
	return (ptr);
}
/*
int main(void)
{
	int *ptr = calloc(0, 1);
	printf("%d %d" , ptr[0]);

	return (0);
}
*/