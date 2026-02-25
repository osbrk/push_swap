/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:18:15 by osukhore          #+#    #+#             */
/*   Updated: 2025/11/03 11:03:03 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	size_t	len;
	char	*str;

	i = -1;
	start = 0;
	if (s1 == 0 || set == 0)
		return (0);
	end = ft_strlen(s1);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]) != 0)
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]) != 0)
		end--;
	len = end - start;
	str = (char *)malloc(len + 1);
	if (str == 0)
		return (0);
	while (++i < len)
		str[i] = s1[start + i];
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
//	char const	*s1 = "     Never gonna give you up, never gonna let   ";
//	char const	*set = " ";
//	char		*result;
//	char		*argv_s1;
//	char		*argv_set;
//	char		*argv_result;
//
//	//ERROR CHECK
//	if (argc < 3)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Need 2x ARGV to work with! \e[0m\n"
//			"\e[1;7m |1. String s1| \n |2. String set| \e[0m\n");
//		return (0);
//	}
//	argv_s1 = argv[1];
//	argv_set = argv[2];
//
//	//FILE NAME
//	printf("\n\e[1;7m ft_strtrim.c \e[0m\n\n");
//	printf("--------------------------------------------\n\n");
//
//	//TEST 1: USING ARGV
//	printf("Test 1: Using ARGV\n");
//	printf("Trim = |%s|\n\n", argv_set);
//	printf("Input:\t\t|%s|\n", argv_s1);
//	printf("My result:\t");
//	argv_result = ft_strtrim(argv_s1, argv_set);
//	if (argv_result)
//		printf("\e[34m|%s|\e[0m\n\n", argv_result);
//	else
//		printf("\e[34m(null)\e[0m\n\n");
//	printf("--------------------------------------------\n\n");
//	free(argv_result);
//
//	//TEST 2: SIMPLE TEST
//	printf("Test 2: Simple test\n");
//	printf("Trim = |%s|\n\n", set);
//	printf("Input:\t\t|%s|\n", s1);
//	printf("My result:\t");
//	result = ft_strtrim(s1, set);
//	if (result)
//		printf("\e[34m|%s|\e[0m\n", result);
//	else
//		printf("\e[34m(null)\e[0m\n");
//	printf("\n--------------------------------------------\n\n");
//
//	//JOB DONE
//	printf("\e[1;7m Job done! \e[0m\n");
//	free(result);
//	return (0);
//}
