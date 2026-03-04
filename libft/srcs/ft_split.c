/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 10:20:57 by osukhore          #+#    #+#             */
/*   Updated: 2025/11/03 11:02:13 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	ft_free(char **str, size_t i)
{
	while (i > 0)
	{
		i--;
		free(str[i]);
	}
	free(str);
}

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (c == 0)
		return (1);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static int	ft_wordcopy(char **str, char const *s, char c, size_t count)
{
	size_t	i;
	size_t	start;
	size_t	len;

	i = 0;
	start = 0;
	while (i < count)
	{
		while (s[start] != '\0' && s[start] == c)
			start++;
		len = 0;
		while (s[start + len] != '\0' && s[start + len] != c)
			len++;
		str[i] = ft_substr(s, start, len);
		if (str[i] == 0)
		{
			ft_free(str, i);
			return (0);
		}
		i++;
		start += len;
	}
	str[i] = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**str;

	if (s == 0 || !*s)
		return (ft_calloc(1, sizeof(char *)));
	count = ft_wordcount(s, c);
	str = (char **)malloc((count + 1) * sizeof(char *));
	if (str == 0)
		return (0);
	if (ft_wordcopy(str, s, c, count) == 0)
		return (0);
	return (str);
}

//#include <ctype.h>
//#include <limits.h>
//#include <fcntl.h>
//#include <stdio.h>
//#include <string.h>
//#include <strings.h>
//#include <bsd/string.h>
//int	main(int argc, char **argv)
//{
//	char	*s = "Never gonna give you up, never gonna let you down";
//	size_t	i;
//	char	**str_array;
//	char	argv_c  = argv[2][0];
//	char	*argv_s = argv[1];
//	char	c = ' ';
//
//	//ERROR CHECK
//	if (argc < 3)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Need 2x ARGV to work with! \e[0m\n"
//			"\e[1;7m |1. String| \n |2. Character| \e[0m\n");
//		return (0);
//	}
//
//	//FILE NAME
//	printf("\n\e[1;7m ft_split.c \e[0m\n\n");
//	printf("--------------------------------------------\n\n");
//
//	//TEST 1: USING ARGV
//	printf("Test 1: Using ARGV\n");
//	printf("%s\n|%c|\n\n", argv_s, argv_c);
//	str_array = ft_split(argv_s, argv_c);
//	printf("My result:\n");
//	if (str_array == 0)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Malloc bugged! \e[0m\n");
//		return (0);
//	}
//	i = 0;
//	while (str_array[i] != 0)
//	{
//		printf("\e[34m%zu: %s\e[0m\n", i, str_array[i]);
//		i++;
//	}
//	printf("\e[34m%zu: %s\e[0m\n", i, str_array[i]);
//	printf("\n");
//	ft_free(str_array, i);
//	printf("--------------------------------------------\n\n");
//
//	//TEST 2: SIMPLE TEST
//	printf("Test 2: Simple test\n");
//	printf("%s\n|%c|\n\n", s, c);
//	str_array = ft_split(s, c);
//	printf("My result:\n");
//	if (str_array == 0)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Malloc bugged! \e[0m\n");
//		return (0);
//	}
//	i = 0;
//	while (str_array[i] != 0)
//	{
//		printf("\e[34m%zu: %s\e[0m\n", i, str_array[i]);
//		i++;
//	}
//	printf("\e[34m%zu: %s\e[0m\n", i, str_array[i]);
//	ft_free(str_array, i);
//	printf("\n--------------------------------------------\n\n");
//	//JOB DONE
//	printf("\e[1;7m Job done! \e[0m\n");
//	return (0);
//}
