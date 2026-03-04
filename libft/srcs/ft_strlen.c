/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:29:09 by osukhore          #+#    #+#             */
/*   Updated: 2025/11/03 11:02:35 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
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
//	char	str[] = "Never gonna give you up, never gonna let you down";
//	size_t	real;
//	size_t	mine;
//	char	*argv_str = argv[1];
//
//	//ERROR CHECK
//	if (argc < 2)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Need ARGV to work with! \e[0m\n"
//			"\e[1;7m |1. String| \e[0m\n");
//		return (0);
//	}
//
//	//FILE NAME
//	printf("\n\e[1;7m ft_strlen.c \e[0m\n\n");
//	printf("--------------------------------------------\n\n");
//
//	//TEST 1: USING ARGV
//	printf("Test 1: Using ARGV\n");
//	printf("%s\n\n", argv_str);
//	printf("Original:\t");
//	real = strlen(argv_str);
//	printf("\e[92m%zu\e[0m\n", real);
//
//	printf("My result:\t");
//	mine = ft_strlen(argv_str);
//	printf("\e[34m%zu\e[0m\n\n", mine);
//	printf("--------------------------------------------\n\n");
//
////	//TEST 2: SIMPLE TEST
//	printf("Test 2: Simple test\n");
//	printf("%s\n\n", str);
//	printf("Original:\t");
//	real = strlen(str);
//	printf("\e[92m%zu\e[0m\n", real);
//
//	printf("My result:\t");
//	mine = ft_strlen(str);
//	printf("\e[34m%zu\e[0m\n", mine);
//	printf("\n--------------------------------------------\n\n");
//
//	//JOB DONE
//	printf("\e[1;7m Job done! \e[0m\n");
//	return (0);
//}
