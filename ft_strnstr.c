#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t		i;
	int			length;
	unsigned char		*buff1;
	unsigned char		*buff2;

    if(!str1 || !str2)
        return (NULL);
	if (*str2 == '\0')
		return ((unsigned char *) str1);
	buff1 = (unsigned char *) str1;
	buff2 = (unsigned char *) str2;
	i = 0;
	length = ft_strlen(buff2);
	while (buff1[i] != '\0' && (i + length) <= n)
	{
		if (ft_strncmp((buff1 + i), buff2, length) == 0)
			return (buff1 + i);
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