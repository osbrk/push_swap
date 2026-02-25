/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:58:20 by osukhore          #+#    #+#             */
/*   Updated: 2025/11/03 10:56:11 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
		str[i++] = 0;
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
//	char	str1_real[] = "Nevergonnagiveyouup";
//	char	str1_mine[] = "Nevergonnagiveyouup";
//	char	str2_real[] = "Nevergonnagiveyouup";
//	char	str2_mine[] = "Nevergonnagiveyouup";
//	char	*argv_s;
//	char	*argv_real;
//	char	*argv_mine;
//	size_t	i;
//	size_t	n = 6;
//	size_t	index = 5;
//	size_t	argv_n;
//	size_t	argv_len;
//	size_t	str_len;
//
//	//ERROR CHECK
//	if (argc < 3)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Need 2x ARGV to work with! \e[0m\n"
//			"\e[1;7m |1. String| \n |2. Int| \e[0m\n");
//		return (0);
//	}
//	argv_s = argv[1];
//	argv_real = ft_strdup(argv_s);
//	argv_mine = ft_strdup(argv_s);
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
//	argv_n = (size_t)ft_atoi(argv[2]);
//	argv_len = ft_strlen(argv_s);
//
//	//FILE NAME
//	printf("\n\e[1;7m ft_bzero.c \e[0m\n\n");
//	printf("--------------------------------------------\n\n");
//
//	//TEST 1: USING ARGV
//	str_len = ft_strlen(str1_real);
//	printf("Test 1: Using ARGV\n");
//	printf("%s\n|n = %zu|\n\n", argv_s, argv_n);
//	bzero(argv_real, argv_n);
//	printf("Original:\n");
//	i = 0;
//	while (i < argv_len)
//	{
//		if (argv_real[i] == 0)
//			printf("\e[92m0\e[0m");
//		else
//			printf("%c", argv_real[i]);
//		i++;
//	}
//	printf("\n\n");
//
//	ft_bzero(argv_mine, argv_n);
//	printf("My result:\n");
//	i = 0;
//	while (i < argv_len)
//	{
//		if (argv_mine[i] == 0)
//			printf("\e[34m0\e[0m");
//		else
//			printf("%c", argv_mine[i]);
//		i++;
//	}
//	printf("\n\n--------------------------------------------\n\n");
//	free(argv_real);
//	free(argv_mine);
//
//	//TEST 2: SIMPLE TEST
//	printf("Test 2: Simple test\n");
//	printf("%s\n|n = %zu|\n\n", str1_real, n);
//	bzero(str1_real, n);
//	printf("Original:\n");
//	i = 0;
//	while (i < str_len)
//	{
//		if (str1_real[i] == 0)
//			printf("\e[92m0\e[0m");
//		else
//			printf("%c", str1_real[i]);
//		i++;
//	}
//	printf("\n\n");
//
//	ft_bzero(str1_mine, n);
//	printf("My result:\n");
//	i = 0;
//	while (i < str_len)
//	{
//		if (str1_mine[i] == 0)
//			printf("\e[34m0\e[0m");
//		else
//			printf("%c", str1_mine[i]);
//		i++;
//	}
//	printf("\n\n--------------------------------------------\n\n");
//
//	//TEST 3: SIMPLE TEST WITH OFFSET
//	char	*real_offset = str2_real + index;
//	char	*mine_offset = str2_mine + index;
//	printf("Test 3: Simple with offset\n");
//	printf("%s\n|n = %zu| |offset = %zu|\n\n", str2_real, n, index);
//	bzero(real_offset, n);
//	printf("Original:\n");
//	i = 0;
//	while (i < str_len)
//	{
//		if (str2_real[i] == 0)
//			printf("\e[92m0\e[0m");
//		else
//			printf("%c", str2_real[i]);
//		i++;
//	}
//	printf("\n\n");
//
//	ft_bzero(mine_offset, n);
//	printf("My result:\n");
//	i = 0;
//	while (i < str_len)
//	{
//		if (str2_mine[i] == 0)
//			printf("\e[34m0\e[0m");
//		else
//			printf("%c", str2_mine[i]);
//		i++;
//	}
//	printf("\n");
//	printf("\n--------------------------------------------\n\n");
//
//	//JOB DONE!
//	printf("\e[1;7m Job done! \e[0m\n");
//	return (0);
//}
