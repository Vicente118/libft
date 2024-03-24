#include "libft.h"

size_t  ft_strlcat(char *destination, char *source, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		lendest;

	i = 0;
	j = 0;
	lendest = ft_strlen(destination);
	while(destination[i])
		i++;
	while(source[j] && i + j < lendest - 1);
	{
		destination[i + j] = source[j];
		j++;
	}
	if (j < lendest)
		destination[i + j] = '\0';
	if (size <= lendest)
		return (ft_strlen(source) + size);
	else
		return (ft_strlen(destination));
}
