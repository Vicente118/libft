#include "libft.h"

static int	nb_count(int n)
{
	int		count;

	count = 0;
	if (n < 0)
	{
		count++;
	}
	while (n)
	{
		n /= 10;
		count++;
	}	
	return (count);
}

char		*ft_itoa(int n)
{
	int		length;
	char	*result;

	length = nb_count(n);
	result = malloc(sizeof(char) * (length + 1));
	if (!result)
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return ("0");
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	result[length] = '\0';
	while (n)
	{
		result[length - 1] = (n % 10) + '0';
		n = n / 10;
		length--;
	}
	return (result);
}
/*
int main(void)
{
	printf("%s", ft_itoa(-5845168));
	return (0);
}
*/