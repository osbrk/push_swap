/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:48:08 by osukhore          #+#    #+#             */
/*   Updated: 2026/02/25 13:01:31 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol(const char *nptr)
{
	size_t	i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == 43 || nptr[i] == 45)
	{
		if (nptr[i] == 45)
			sign = -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
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
//	char	*str;
//	char	*argv_s;
//	int		real;
//	int		mine;
//
//	//ERROR CHECK
//	if (argc < 2)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Need ARGV to work with! \e[0m\n"
//			"\e[1;7m |1. String| \e[0m\n");
//		return (0);
//	}
//	argv_s = argv[1];
//
//	//FILE NAME
//	printf("\n\e[1;7m ft_atoi.c \e[0m\n\n");
//	printf("--------------------------------------------\n\n");
//
//	//TEST 1: Using ARGV
//	printf("Test 1: Using ARGV\n");
//	printf("Input ARGV\t|%s|\n\n", argv_s);
//	real = atoi(argv_s);
//	mine = ft_atoi(argv_s);
//	printf("Original:\t\e[92m%d\e[0m\n", real);
//	printf("My result:\t\e[34m%d\e[0m\n\n", mine);
//	printf("--------------------------------------------\n\n");
//
//	//TEST 2: Simple test
//	printf("Test 2: Simple tests\n\n");
//
//	//POSITIVE
//	str = "       42a042b483647";
//	real = atoi(str);
//	mine = ft_atoi(str);
//	printf("Input +ive\t|%s|\n", str);
//	printf("Original:\t\e[92m%d\e[0m\n", real);
//	printf("My result:\t\e[34m%d\e[0m\n\n", mine);
//
//	//NEGATIVE
//	str = "       -42!042b483647";
//	real = atoi(str);
//	mine = ft_atoi(str);
//	printf("Input -ive\t|%s|\n", str);
//	printf("Original:\t\e[92m%d\e[0m\n", real);
//	printf("My result:\t\e[34m%d\e[0m\n\n", mine);
//
//	//ZERO
//	str = "      0zero";
//	real = atoi(str);
//	mine = ft_atoi(str);
//	printf("Input Zero\t|%s|\n", str);
//	printf("Original:\t\e[92m%d\e[0m\n", real);
//	printf("My result:\t\e[34m%d\e[0m\n\n", mine);
//
//	//INT MAX
//	str = "   \t   2147483647intmax";
//	real = atoi(str);
//	mine = ft_atoi(str);
//	printf("Input Int Max\t|%s|\n", str);
//	printf("Original:\t\e[92m%d\e[0m\n", real);
//	printf("My result:\t\e[34m%d\e[0m\n\n", mine);
//
//	//INT MIN
//	str = "      -2147483648intmin";
//	real = atoi(str);
//	mine = ft_atoi(str);
//	printf("Input Int Min\t|%s|\n", str);
//	printf("Original:\t\e[92m%d\e[0m\n", real);
//	printf("My result:\t\e[34m%d\e[0m\n", mine);
//
//	printf("\n--------------------------------------------\n\n");
//
//	//JOB DONE
//	printf("\e[1;7m Job done! \e[0m\n");
//	return (0);
//}
