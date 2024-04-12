/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarras <vdarras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:27:18 by vdarras           #+#    #+#             */
/*   Updated: 2024/04/11 15:04:22 by vdarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	i;
	long int	res;
	int			signe;

	i = 0;
	res = 0;
	signe = 1;
	if (!str)
		return (0);
	if (str[0] == '\0')
		return (0);
	while (str[i] >= 9 && str[i] <= 13 || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		if (res > INT_MAX)
			return (-1);
		else if (res < INT_MIN)
			return (0);
		i++;
	}
	return (res * signe);
}
/*
int main(int argc, char **argv)
{
	if (argc == 2) 
	{
		printf("le mien: [%d]\n", ft_atoi(argv[1]));
		printf("le pas mien: [%d]\n", atoi(argv[1]));
	}
    return (0);	
}
*/