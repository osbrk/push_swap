/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:06:36 by osukhore          #+#    #+#             */
/*   Updated: 2025/11/03 11:02:28 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	dest_len = ft_strlen(dest);
	if (dest_len >= size)
		return (size + src_len);
	while (src[i] != '\0' && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

//#include <ctype.h>
//#include <limits.h>
//#include <fcntl.h>
//#include <stdio.h>
//#include <string.h>
//#include <strings.h>
//#include <bsd/string.h>
////COMPILE WITH LSBD!
//int	main(int argc, char **argv)
//{
//	char	dest1[100] = "Never gonna ";
//	char	dest2[100] = "Never gonna ";
//	char	src[] = "give you up, never gonna let you down";
//	size_t	n = 35;
//	size_t	real;
//	size_t	mine;
//	char	*argv_dest1;
//	char	*argv_dest2;
//	char	*argv_src;
//	size_t	argv_n;
//
//	//ERROR CHECK
//	if (argc < 4)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Need 3x ARGV to work with! \e[0m\n"
//			"\e[1;7m |1. String dest| \n |2. String src| \n"
//			" |3. Int size| \e[0m\n");
//		return (0);
//	}
//
//	argv_dest1 = ft_strdup(argv[1]);
//	argv_dest2 = ft_strdup(argv[1]);
//	argv_src = ft_strdup(argv[2]);
//	if (argv_dest1 == 0 || argv_dest2 == 0 || argv_src == 0)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Malloc bugged! \e[0m\n");
//		if (argv_dest1)
//			free(argv_dest1);
//		if (argv_dest2)
//			free(argv_dest2);
//		if (argv_src)
//			free(argv_src);
//		return (0);
//	}
//	argv_n = (size_t)ft_atoi(argv[3]);
//
//	//FILE NAME
//	printf("\n\e[1;7m ft_strlcat.c \e[0m\n\n");
//	printf("--------------------------------------------\n\n");
//
//	//TEST 1: USING ARGV
//	printf("Test 1: Using ARGV\n");
//	printf("dest = %s\nsrc = %s\n|n = %zu|\n\n",
//		argv_dest1, argv_src, argv_n);
//	printf("Original:\t");
//	real = strlcat(argv_dest1, argv_src, argv_n);
//	printf("\e[92m%zu\e[0m\n", real);
//	printf("\t\t\e[92m%s\e[0m\n\n", argv_dest1);
//
//	printf("My result:\t");
//	mine = ft_strlcat(argv_dest2, argv_src, argv_n);
//	printf("\e[34m%zu\e[0m\n", mine);
//	printf("\t\t\e[34m%s\e[0m\n\n", argv_dest2);
//	printf("--------------------------------------------\n\n");
//
//	//TEST 2: SIMPLE TEST
//	printf("Test 2: Simple test\n");
//	printf("dest = %s\nsrc = %s\n|n = %zu|\n\n", dest1, src, n);
//	printf("Original:\t");
//	real = strlcat(dest1, src, n);
//	printf("\e[92m%zu\e[0m\n", real);
//	printf("\t\t\e[92m%s\e[0m\n\n", dest1);
//
//	printf("My result:\t");
//	mine = ft_strlcat(dest2, src, n);
//	printf("\e[34m%zu\e[0m\n", mine);
//	printf("\t\t\e[34m%s\e[0m\n", dest2);
//	printf("\n--------------------------------------------\n\n");
//
//	//JOB DONE
//	printf("\e[1;7m Job done! \e[0m\n");
//	free(argv_dest1);
//	free(argv_dest2);
//	free(argv_src);
//	return (0);
//}
////42 main.c -lft -L. -lbsd
