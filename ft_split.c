/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarras <vdarras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:27:55 by vdarras           #+#    #+#             */
/*   Updated: 2024/04/02 18:40:23 by vdarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	words;
	size_t	indice;

	words = 0;
	while (*s)
	{
		indice = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			if (indice == 0)
			{
				words++;
				indice = 1;
			}
			s++;
		}
	}
	return (words);
}

static char	*words(const char *s, char sep)
{
	size_t	i;
	size_t	j;
	char	*new_s;

	i = 0;
	j = 0;
	while (s[j] && s[j] != sep)
		j++;
	new_s = malloc((j + 1) * sizeof(char));
	if (!new_s)
		return (NULL);
	while (i < j)
	{
		new_s[i] = s[i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
// FREE FUNCTION IF MALLOC FAILS

void	loop(const char **s, char c, int i)
{
	if (i == 0)
	{
		while (**s && **s == c)
			(*s)++;
	}
	else
	{
		while (**s && **s != c)
			++*s;
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**array;
	char	*word;

	if (!s)
		return (NULL);
	array = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	i = -1;
	array[count_words(s, c)] = NULL;
	while (*s)
	{
		loop(&s, c, 0);
		if (*s != '\0')
		{
			word = words(s, c);
			if (!word)
				return (NULL);
			array[++i] = word;
		}
		loop(&s, c, 1);
	}
	return (array);
}
/*
int main(void)
{
	char c = ' ';
	char const *s = "   Je  suis  un    humain   ";
	char	**array = ft_split(s, c);
	printf("%s\n%s", array[0], array[1]);
	return (0);
}
*/