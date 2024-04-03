#include "libft.h"

/*
char change_char(unsigned int nb, char c)
{
	return (c + nb);
}
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_s;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	new_s = malloc(ft_strlen((char *) s) * sizeof(char));
	if (!new_s)
		return (NULL);
	new_s = (char *) s;
	while (new_s[i])
	{
		new_s[i] = (*f)(i, new_s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
/*
int main(void)
{
	char const s[18] = "Je suis un humain";
	printf("%s", ft_strmapi(s, &change_char));
	return (0);
}
*/