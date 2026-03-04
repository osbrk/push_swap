/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:40:07 by osukhore          #+#    #+#             */
/*   Updated: 2025/11/03 11:01:42 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;
	unsigned char		a;

	i = 0;
	str = (const unsigned char *)s;
	a = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == a)
			return ((void *)(str + i));
		i++;
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
//	char			str[] = "Never gonna give you up";
//	char			*real;
//	char			*mine;
//	char			*argv_str;
//	int				argv_c;
//	size_t			argv_n;
//	int				c = 'g';
//	size_t			n = 10;
//
//	//ERROR CHECK
//	if (argc < 4)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Need 3x ARGV to work with! \e[0m\n"
//			"\e[1;7m |1. String| \n |2. Character| \n |3. Int| \e[0m\n");
//		return (0);
//	}
//	argv_str = argv[1];
//	argv_c = argv[2][0];
//	argv_n = (size_t)ft_atoi(argv[3]);
//
//	//FILE NAME
//	printf("\n\e[1;7m ft_memchr.c \e[0m\n\n");
//	printf("--------------------------------------------\n\n");
//
//	//TEST 1: USING ARGV
//	printf("Test 1: Using ARGV\n");
//	printf("%s\n|c = %c| |n = %zu|\n\n", argv_str, argv_c, argv_n);
//	printf("Original:\n");
//	real = memchr(argv_str, argv_c, argv_n);
//	if (real)
//		printf("\e[92m%s\e[0m\n\n", real);
//	else
//		printf("\e[92m(null)\e[0m\n\n");
//
//	printf("My result:\n");
//	mine = ft_memchr(argv_str, argv_c, argv_n);
//	if (mine)
//		printf("\e[34m%s\e[0m\n\n", mine);
//	else
//		printf("\e[34m(null)\e[0m\n\n");
//
//	printf("--------------------------------------------\n\n");
//
//	//TEST 2: SIMPLE
//	printf("Test 2: Simple test\n");
//	printf("%s\n|c = %c| |n = %zu|\n\n", str, c, n);
//	printf("Original:\n");
//	real = memchr(str, c, n);
//	if (real)
//		printf("\e[92m%s\e[0m\n\n", real);
//	else
//		printf("\e[92m(null)\e[0m\n\n");
//
//	printf("My result:\n");
//	mine = ft_memchr(str, c, n);
//	if (mine)
//		printf("\e[34m%s\e[0m\n", mine);
//	else
//		printf("\e[34m(null)\e[0m\n");
//	printf("--------------------------------------------\n\n");
//
//	//JOB DONE!
//	printf("\e[1;7m Job done! \e[0m\n");
//	return (0);
//}
