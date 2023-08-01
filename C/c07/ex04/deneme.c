#include <stdlib.h>

int		ft_in_base(char c, char *base)
{
	int i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (i);
	return (-1);
}

int		ft_checkbase(char *base)
{
	int i;

	i = -1;
	while (base[++i])
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| ft_in_base(base[i], base + i + 1) >= 0
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
	return ((i < 2) ? 0 : i);
}

int		ft_atoi_base(char *str, char *base, int size)
{
	int i;
	int n;
	int negative;

	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	negative = 0;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			negative = 1 - negative;
	n = 0;
	while ((i = ft_in_base(*str++, base)) >= 0)
		n = n * size + i;
	if (negative)
		n *= -1;
	return (n);
}

int		ft_nbrlen(unsigned int n, unsigned int base_size)
{
	if (n < base_size)
		return (1);
	return (1 + ft_nbrlen(n / base_size, base_size));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char			*dest;
	unsigned int	nb;
	int				size;
	int				i;
	int				n;

	n = ft_checkbase(base_from);
	if (!(n && (size = ft_checkbase(base_to))))
		return (NULL);
	n = ft_atoi_base(nbr, base_from, n);
	nb = (n < 0) ? -n : n;
	i = ft_nbrlen(nb, size) + ((n < 0) ? 1 : 0);
	if (!(dest = malloc((i + 1) * sizeof(char))))
		return (NULL);
	dest[i] = '\0';
	while (i--)
	{
		dest[i] = base_to[nb % size];
		nb /= size;
	}
	if (n < 0)
		dest[0] = '-';
	return (dest);
}

#include <stdio.h>

int main() {
    char* binaryNumber = "10101010100";
    char* decimalNumber = ft_convert_base(binaryNumber, "01", "0123456789");
    printf("Binary: %s -> Decimal: %s\n", binaryNumber, decimalNumber);
    free(decimalNumber);

    char* hexNumber = "1A3";
    char* decimalNumber2 = ft_convert_base(hexNumber, "0123456789ABCDEF", "0123456789");
    printf("Hexadecimal: %s -> Decimal: %s\n", hexNumber, decimalNumber2);
    free(decimalNumber2);

    char* decimalNumber4 = "255";
    char* binaryNumber2 = ft_convert_base(decimalNumber4, "0123456789", "01");
    printf("Decimal: %s -> Binary: %s\n", decimalNumber4, binaryNumber2);
    free(binaryNumber2);

    return 0;
}

/*Belli bir değeri dönüştürme işlemi yaapıyor*/