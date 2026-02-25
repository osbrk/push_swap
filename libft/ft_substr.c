/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 11:29:17 by osukhore          #+#    #+#             */
/*   Updated: 2025/11/03 11:03:06 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	str_len;
	size_t	s_len;
	char	*str;

	i = -1;
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		str = (char *)malloc(1);
		if (str == 0)
			return (0);
		str[0] = '\0';
		return (str);
	}
	str_len = s_len - (size_t)start;
	if (len > str_len)
		len = str_len;
	str = (char *)malloc(len + 1);
	if (str == 0)
		return (0);
	while (++i < len)
		str[i] = s[start + i];
	str[i] = '\0';
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
//	char const		s[] = "Never gonna give you up,";
//	unsigned int	start = 7;
//	size_t			len = 9;
//	char			*result;
//	char			*argv_s;
//	char			*argv_result;
//	unsigned int	argv_start;
//	size_t			argv_len;
//
//	//ERROR CHECK
//	if (argc < 4)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Need 3x ARGV to work with! \e[0m\n"
//			"\e[1;7m |1. String| \n |2. Int start| \n |3. Int len| \e[0m\n");
//		return (0);
//	}
//	argv_s = argv[1];
//	argv_start = (unsigned int)ft_atoi(argv[2]);
//	argv_len = (size_t)ft_atoi(argv[3]);
//
//	//FILE NAME
//	printf("\n\e[1;7m ft_substr.c \e[0m\n\n");
//	printf("--------------------------------------------\n\n");
//
//	//TEST 1: USING ARGV
//	printf("Test 1: Using ARGV\n");
//	printf("|start = %u| |len = %zu|\n\n", argv_start, argv_len);
//	printf("Input:\t\t|%s|\n", argv_s);
//	printf("My result:\t");
//	argv_result = ft_substr(argv_s, argv_start, argv_len);
//	if (argv_result)
//	{
//		printf("\e[34m|%s|\e[0m\n\n", argv_result);
//		free(argv_result);
//	}
//	else
//		printf("\e[34m(null)\e[0m\n\n");
//	printf("--------------------------------------------\n\n");
//
//	//TEST 2: SIMPLE TEST
//	printf("Test 2: Simple test\n");
//	printf("|start = %u| |len = %zu|\n\n", start, len);
//	printf("Input:\t\t|%s|\n", s);
//	printf("My result:\t");
//	result = ft_substr(s, start, len);
//	if (result)
//	{
//		printf("\e[34m|%s|\e[0m\n", result);
//		free(result);
//	}
//	else
//		printf("\e[34m(null)\e[0m\n");
//	printf("\n--------------------------------------------\n\n");
//
//	//JOB DONE
//	printf("\e[1;7m Job done! \e[0m\n");
//	return (0);
//}
