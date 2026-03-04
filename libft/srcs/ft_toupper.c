/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:24:51 by osukhore          #+#    #+#             */
/*   Updated: 2025/11/03 11:03:12 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
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
//	int		c1 = 'c';
//	int		c2 = 'c';
//	int		real;
//	int		mine;
//	char	*argv_real;
//	char	*argv_mine;
//
//	//ERROR CHECK
//	if (argc < 2)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Need ARGV to work with! \e[0m\n"
//			"\e[1;7m |1. Character| \e[0m\n");
//		return (0);
//	}
//	argv_real = strdup(argv[1]);
//	argv_mine = strdup(argv[1]);
//	if (argv_real == 0 || argv_mine == 0)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Malloc bugged! \e[0m\n");
//		if (argv_real)
//			free(argv_real);
//		if (argv_mine)
//			free(argv_mine);
//		return (0);
//	}
//
//	//FILE NAME
//	printf("\n\e[1;7m ft_toupper.c \e[0m\n\n");
//	printf("--------------------------------------------\n\n");
//
//	//TEST 1: Using ARGV
//	printf("Test 1: Using ARGV\n");
//	printf("|%c|\n\n", argv_real[0]);
//	real = toupper(argv_real[0]);
//	mine = ft_toupper(argv_mine[0]);
//	printf("Original:\t\e[92m%c\e[0m\n", real);
//	printf("My result:\t\e[34m%c\e[0m\n", mine);
//	printf("\n--------------------------------------------\n\n");
//
//	//TEST 2: Simple test
//	printf("Test 2: Simple test\n");
//	printf("|%c|\n\n", c1);
//	real = toupper(c1);
//	mine = ft_toupper(c2);
//	printf("Original:\t\e[92m%c\e[0m\n", real);
//	printf("My result:\t\e[34m%c\e[0m\n", mine);
//	printf("\n--------------------------------------------\n\n");
//
//	//JOB DONE!
//	printf("\e[1;7m Job done! \e[0m\n");
//	free(argv_real);
//	free(argv_mine);
//	return (0);
//}
////SYMBOL TO COPY
////Ø