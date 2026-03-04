/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:19:15 by osukhore          #+#    #+#             */
/*   Updated: 2025/11/03 11:01:23 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)
		|| (c >= 48 && c <= 57))
		return (8);
	return (0);
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
//	int		c = 'A';
//	int		argv_c  = argv[1][0];
//	int		real;
//	int		mine;
//
//	//ERROR CHECK
//	if (argc < 2)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Need ARGV to work with! \e[0m\n"
//			"\e[1;7m |1. Character| \e[0m\n");
//		return (0);
//	}
//
//	//FILE NAME
//	printf("\n\e[1;7m ft_isalnum.c \e[0m\n\n");
//	printf("--------------------------------------------\n\n");
//
//	//TEST 1: Using ARGV
//	printf("Test 1: Using ARGV\n");
//	printf("|%c|\n\n", argv_c);
//	real = isalnum(argv_c);
//	mine = ft_isalnum(argv_c);
//	printf("Original:\t\e[92m%d\e[0m\n", real);
//	printf("My result:\t\e[34m%d\e[0m\n", mine);
//	printf("\n--------------------------------------------\n\n");
//
//	//TEST 2: Simple test
//	printf("Test 2: Simple test\n");
//	printf("|%c|\n\n", c);
//	real = isalnum(c);
//	mine = ft_isalnum(c);
//	printf("Original:\t\e[92m%d\e[0m\n", real);
//	printf("My result:\t\e[34m%d\e[0m\n", mine);
//	printf("\n--------------------------------------------\n\n");
//
//	//JOB DONE!
//	printf("\e[1;7m Job done! \e[0m\n");
//	return (0);
//}
////SYMBOL TO COPY
////Ø
