/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:10:34 by osukhore          #+#    #+#             */
/*   Updated: 2025/11/03 11:02:59 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	a;

	i = 0;
	a = (unsigned char)c;
	while (s[i] != '\0')
		i++;
	if (a == 0)
		return ((char *)(s + i));
	while (i > 0)
	{
		i--;
		if (s[i] == a)
			return ((char *)(s + i));
	}
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
//	char	str[] = "Never gonna give you up, never gonna let you down";
//	int		c = 'l';
//	char	*argv_str;
//	int		argv_c;
//	char	*real;
//	char	*mine;
//
//	//ERROR CHECK
//	if (argc < 3)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Need 2x ARGV to work with! \e[0m\n"
//			"\e[1;7m |1. String| \n |2. Character| \e[0m\n");
//		return (0);
//	}
//	argv_str = argv[1];
//	argv_c = argv[2][0];
//
//	//FILE NAME
//	printf("\n\e[1;7m ft_strrchr.c \e[0m\n\n");
//	printf("--------------------------------------------\n\n");
//
//	//TEST 1: USING ARGV
//	printf("Test 1: Using ARGV\n");
//	printf("%s\n|%c|\n\n", argv_str, argv_c);
//	printf("Original:\t");
//	real = strrchr(argv_str, argv_c);
//	if (real)
//		printf("\e[92m%s\e[0m\n\n", real);
//	else
//		printf("\e[92m(null)\e[0m\n\n");
//
//	printf("My result:\t");
//	mine = ft_strrchr(argv_str, argv_c);
//	if (mine)
//		printf("\e[34m%s\e[0m\n\n", mine);
//	else
//		printf("\e[34m(null)\e[0m\n\n");
//	printf("--------------------------------------------\n\n");
//
//	//TEST 2: SIMPLE TEST
//	printf("Test 2: Simple test\n");
//	printf("%s\n|%c|\n\n", str, c);
//	printf("Original:\t");
//	real = strrchr(str, c);
//	if (real)
//		printf("\e[92m%s\e[0m\n\n", real);
//	else
//		printf("\e[92m(null)\e[0m\n\n");
//
//	printf("My result:\t");
//	mine = ft_strrchr(str, c);
//	if (mine)
//		printf("\e[34m%s\e[0m\n", mine);
//	else
//		printf("\e[34m(null)\e[0m\n");
//	printf("\n--------------------------------------------\n\n");
//
//	//JOB DONE!
//	printf("\e[1;7m Job done! \e[0m\n");
//	return (0);
//}
