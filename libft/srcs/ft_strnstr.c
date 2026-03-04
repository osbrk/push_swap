/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:41:00 by osukhore          #+#    #+#             */
/*   Updated: 2025/11/03 11:02:55 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)(big + i));
			j++;
		}
		i++;
	}
	return (0);
}

////COMPILE WITH LSBD!
//#include <ctype.h>
//#include <limits.h>
//#include <fcntl.h>
//#include <stdio.h>
//#include <string.h>
//#include <strings.h>
//#include <bsd/string.h>
//
//int	main(int argc, char **argv)
//{
//	char	big[] =
//		"Never gonna give you up, never gonna let you down";
//	char	little[] = "let";
//	size_t	len = 30;
//	char	*real;
//	char	*mine;
//	char	*argv_big = argv[1];
//	char	*argv_little = argv[2];
//	size_t	argv_len;
//
//	//ERROR CHECK
//	if (argc < 4)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Need 3x ARGV to work with! \e[0m\n"
//			"\e[1;7m |1. String big| \n |2. String little| \n"
//			"|3. Int| \e[0m\n");
//		return (0);
//	}
//	argv_len = (size_t)ft_atoi(argv[3]);
//
//	//FILE NAME
//	printf("\n\e[1;7m ft_strnstr.c \e[0m\n\n");
//	printf("--------------------------------------------\n\n");
//
//	//TEST 1: USING ARGV
//	printf("Test 1: Using ARGV\n");
//	printf("Big string =\t%s\nLittle =\t%s\n|len = %zu|\n\n",
//		argv_big, argv_little, argv_len);
//	printf("Original:\t");
//	real = strnstr(argv_big, argv_little, argv_len);
//	if (real)
//		printf("\e[92m%s\e[0m\n\n", real);
//	else
//		printf("\e[92m(null)\e[0m\n\n");
//
//	printf("My result:\t");
//	mine = ft_strnstr(argv_big, argv_little, argv_len);
//	if (mine)
//		printf("\e[34m%s\e[0m\n\n", mine);
//	else
//		printf("\e[34m(null)\e[0m\n\n");
//	printf("--------------------------------------------\n\n");
//
//	//TEST 2: SIMPLE TEST
//	printf("Test 2: Simple test\n");
//	printf("Big string =\t%s\nLittle =\t%s\n|len = %zu|\n\n", big, little, len);
//
//	printf("Original:\t");
//	real = strnstr(big, little, len);
//	if (real)
//		printf("\e[92m%s\e[0m\n\n", real);
//	else
//		printf("\e[92m(null)\e[0m\n\n");
//
//	printf("My result:\t");
//	mine = ft_strnstr(big, little, len);
//	if (mine)
//		printf("\e[34m%s\e[0m\n\n", mine);
//	else
//		printf("\e[34m(null)\e[0m\n");
//	printf("\n--------------------------------------------\n\n");
//
//	//JOB DONE
//	printf("\e[1;7m Job done! \e[0m\n");
//	return (0);
//}
