#include <stdlib.h>
int	check_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_strings(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && check_separator(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !check_separator(str[i], charset))
			i++;
	}
	return (count);
}

int	ft_strlen_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !check_separator(str[i], charset))
		i++;
	return (i);
}

char	*ft_word(char *str, char *charset)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = ft_strlen_sep(str, charset);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**strings;
	int		i;

	i = 0;
	strings = (char **)malloc(sizeof(char *)
			* (count_strings(str, charset) + 1));
	while (*str != '\0')
	{
		while (*str != '\0' && check_separator(*str, charset))
			str++;
		if (*str != '\0')
		{
			strings[i] = ft_word(str, charset);
			i++;
		}
		while (*str && !check_separator(*str, charset))
			str++;
	}
	strings[i] = 0;
	return (strings);
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	int		index;
	char	**split;
	(void)	argc;
	split = ft_split(argv[1], argv[2]);
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
}

/* int ft_is_separator(char *str, char *charset): Bu işlev, verilen bir karakterin ayırıcı karakter kümesinde
 (charset) olup olmadığını kontrol eder. İşlev, verilen karakterin ayırıcı karakterler arasında olup olmadığını belirlemek için charset dizisini tarar.
  Eğer verilen karakter ayırıcı karakter kümesinde yer alıyorsa 1 döndürür, aksi halde 0 döndürür.

int ft_wordlen(char *str, char *charset): Bu işlev, bir kelimenin uzunluğunu hesaplar.
 Verilen bir metindeki karakterleri tarar ve ayırıcı karakter kümesiyle karşılaşana kadar kelimenin uzunluğunu sayar.
  Ayırıcı karakter kümesine ulaştığında, kelimenin uzunluğunu döndürür.

int ft_wordcount(char *str, char *charset): Bu işlev,
verilen metinde kaç kelime olduğunu hesaplar. 
Metindeki kelimelerin arasındaki ayırıcı karakterleri atlayarak kelime sayısını tespit eder.

char *ft_wordcpy(char *src, int n): Bu işlev, belirli bir uzunluktaki bir kelimeyi kopyalar ve yeni bir bellek alanı oluşturur.
 İşlev, src olarak belirtilen kaynak kelimeyi,
  n olarak belirtilen uzunluk kadar yeni bir bellek alanına kopyalar ve bu alanın başlangıç adresini döndürür.

char **ft_split(char *str, char *charset): Bu ana işlev,
 verilen metni ayırıcı karakter kümesine göre parçalayarak ayrıştırılmış kelimeleri bir string dizisinde (char **) tutar.
  Bellek yönetimi için dikkatli davranır ve gerekli hafıza alanlarını ayrıştırır.
   Sonuç olarak, metindeki ayrıştırılmış kelimeleri içeren bir string dizisi döndürür.*/