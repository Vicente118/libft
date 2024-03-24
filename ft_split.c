#include "libft.h"

static size_t		count_words(char const *s, char c)
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

static char		*words(const char *s, char sep)
{
	size_t	i;
	size_t	j;
	char	*new_s;

	i = 0;
	j = 0;
	while (s[j] && s[j] != sep )
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
char        **ft_split(char const *s, char c)
{
	size_t	i;
	char	**array;
	char	*word;

	if (!s)
		return (NULL);
	i = 0;
	if (!(array = malloc((count_words(s, c) + 1) * sizeof(char *))))
		return (NULL);
	array[count_words(s, c)] = NULL;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s != '\0')
		{
			word = words(s, c);
			if (!word)
				return (NULL);
			array[i++] = word;
		}
		while (*s && *s != c)
			s++;
	}
	return (array);
}
/*
int main(void)
{
	char c = ' ';
	char const *s = "   Je  suis  un    humain   ";
	char	**array = ft_split(s, c);
	printf("%s\n%s\n%s\n%s\n%s", array[0], array[1], array[2], array[3],array[4]);
	return (0);  
}
*/