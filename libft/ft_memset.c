/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:10:10 by osukhore          #+#    #+#             */
/*   Updated: 2025/11/03 11:01:54 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
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
//	char	str1[] = "Never gonna let you down";
//	char	str2[] = "Never gonna let you down";
//	int		c = 'A';
//	size_t	n = 10;
//	char	*argv_dst1;
//	char	*argv_dst2;
//	int		argv_c;
//	size_t	argv_n;
//	char	*real;
//	char	*mine;
//
//	//ERROR CHECK
//	if (argc < 4)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Need 3x ARGV to work with! \e[0m\n"
//			"\e[1;7m |1. String| \n |2. Character| \n |3. Int| \e[0m\n");
//		return (0);
//	}
//	argv_dst1 = ft_strdup(argv[1]);
//	argv_dst2 = ft_strdup(argv[1]);
//	if (argv_dst1 == 0 || argv_dst2 == 0)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Malloc bugged! \e[0m\n");
//		if (argv_dst1)
//			free(argv_dst1);
//		if (argv_dst2)
//			free(argv_dst2);
//		return (0);
//	}
//	argv_c = argv[2][0];
//	argv_n = (size_t)ft_atoi(argv[3]);
//
//	//FILE NAME
//	printf("\n\e[1;7m ft_memset.c \e[0m\n\n");
//	printf("--------------------------------------------\n\n");
//
//	//TEST 1: USING ARGV
//	printf("Test 1: Using ARGV\n");
//	printf("%s\n|c = %c| |n = %zu|\n\n", argv_dst1, argv_c, argv_n);
//	printf("Original:\n");
//	real = memset(argv_dst1, argv_c, argv_n);
//	printf("\e[92m%s\e[0m\n\n", real);
//
//	printf("My result:\n");
//	mine = ft_memset(argv_dst2, argv_c, argv_n);
//	printf("\e[34m%s\e[0m\n\n", mine);
//
//	printf("--------------------------------------------\n\n");
//
//	//TEST 2: SIMPLE TEST
//	printf("Test 2: Simple test\n");
//	printf("%s\n|c = %c| |n = %zu|\n\n", str1, c, n);
//	printf("Original:\n");
//	real = memset(str1, c, n);
//	printf("\e[92m%s\e[0m\n\n", real);
//
//	printf("My result:\n");
//	mine = ft_memset(str2, c, n);
//	printf("\e[34m%s\e[0m\n", mine);
//	printf("\n--------------------------------------------\n\n");
//
//	//JOB DONE
//	printf("\e[1;7m Job done! \e[0m\n");
//	free(argv_dst1);
//	free(argv_dst2);
//	return (0);
//}
