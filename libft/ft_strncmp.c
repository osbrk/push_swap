/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:17:56 by osukhore          #+#    #+#             */
/*   Updated: 2025/11/03 11:02:48 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && i < n - 1
		&& (s1[i]) == (s2[i]))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
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
//	char	str1[] = "Never gonna give you up,";
//	char	str2[] = "Never gonna let you down";
//	size_t	n = 15;
//	int		real;
//	int		mine;
//	char	*argv_str1;
//	char	*argv_str2;
//	size_t	argv_n;
//
//	//ERROR CHECK
//	if (argc < 4)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Need 3x ARGV to work with! \e[0m\n"
//			"\e[1;7m |1. String 1| \n |2. String 2| \n |3. Int| \e[0m\n");
//		return (0);
//	}
//
//	argv_str1 = argv[1];
//	argv_str2 = argv[2];
//	argv_n = (size_t)ft_atoi(argv[3]);
//
//	//FILE NAME
//	printf("\n\e[1;7m ft_strncmp.c \e[0m\n\n");
//	printf("--------------------------------------------\n\n");
//
//	//TEST 1: USING ARGV
//	printf("Test 1: Using ARGV\n");
//	printf("s1 =\t%s\ns2 =\t%s\n|n = %zu|\n\n", argv_str1, argv_str2, argv_n);
//	printf("Original:\t");
//	real = strncmp(argv_str1, argv_str2, argv_n);
//	printf("\e[92m%d\e[0m\n\n", real);
//
//	printf("My result:\t");
//	mine = ft_strncmp(argv_str1, argv_str2, argv_n);
//	printf("\e[34m%d\e[0m\n\n", mine);
//	printf("--------------------------------------------\n\n");
//
//	//TEST 2: SIMPLE TEST
//	printf("Test 2: Simple test\n");
//	printf("s1 =\t%s\ns2 =\t%s\n|n = %zu|\n\n", str1, str2, n);
//	printf("Original:\t");
//	real = strncmp(str1, str2, n);
//	printf("\e[92m%d\e[0m\n\n", real);
//
//	printf("My result:\t");
//	mine = ft_strncmp(str1, str2, n);
//	printf("\e[34m%d\e[0m\n", mine);
//	printf("\n--------------------------------------------\n\n");
//
//	//JOB DONE
//	printf("\e[1;7m Job done! \e[0m\n");
//	return (0);
//}
