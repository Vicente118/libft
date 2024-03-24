#include "libft.h"

int         ft_atoi(const char *str)
{
    int             i;
    int             res;
    int             signe;

    i = 0;
    res = 0;
    signe = 1;
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
        i++;
    }
    return (res * signe);
}
/*
int main(void)
{
    const char *str = "\t  \n -26621556a15";


    printf("%i", ft_atoi(str));
    return (0);
}
*/