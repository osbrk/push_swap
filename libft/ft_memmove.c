/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:21:57 by osukhore          #+#    #+#             */
/*   Updated: 2025/11/03 11:01:51 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest2;
	const unsigned char	*src2;

	i = 0;
	dest2 = (unsigned char *)dest;
	src2 = (const unsigned char *)src;
	if (dest2 == src2)
		return (dest);
	if (dest2 < src2)
	{
		while (i < n)
		{
			dest2[i] = src2[i];
			i++;
		}
	}
	else
	{
		while (n--)
			dest2[n] = src2[n];
	}
	return (dest);
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
//	char	src[] = "Never gonna let you down";
//	char	dest1[] = "make you cry, never gonna run around";
//	char	dest2[] = "make you cry, never gonna run around";
//	size_t	n = 10;
//	char	*argv_dest1;
//	char	*argv_dest2;
//	char	*argv_src;
//	size_t	argv_n;
//	char	*real;
//	char	*mine;
//
//	//ERROR CHECK
//	if (argc < 4)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Need 3x ARGV to work with! \e[0m\n"
//			"\e[1;7m |1. String dest| \n |2. String src| \n |3. Int| \e[0m\n");
//		return (0);
//	}
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
//	printf("\n\e[1;7m ft_memmove.c \e[0m\n\n");
//	printf("--------------------------------------------\n\n");
//
//	//TEST 1: USING ARGV
//	printf("Test 1: Using ARGV\n");
//	printf("dest =\t%s\nsrc =\t%s\n|n = %zu|\n\n",
//		argv_dest1, argv_src, argv_n);
//	printf("Original:\n");
//	real = memmove(argv_dest1, argv_src, argv_n);
//	printf("\e[92m%s\e[0m\n\n", real);
//
//	printf("My result:\n");
//	mine = ft_memmove(argv_dest2, argv_src, argv_n);
//	printf("\e[34m%s\e[0m\n\n", mine);
//	printf("--------------------------------------------\n\n");
//
//	//TEST 2: SIMPLE TEST
//	printf("Test 2: Simple test\n");
//	printf("dest =\t%s\nsrc =\t%s\n|n = %zu|\n\n", dest1, src, n);
//	printf("Original:\n");
//	real = memmove(dest1, src, n);
//	printf("\e[92m%s\e[0m\n\n", real);
//
//	printf("My result:\n");
//	mine = ft_memmove(dest2, src, n);
//	printf("\e[34m%s\e[0m\n", mine);
//	printf("\n--------------------------------------------\n\n");
//
//	//JOB DONE!
//	printf("\e[1;7m Job done! \e[0m\n");
//	free(argv_dest1);
//	free(argv_dest2);
//	free(argv_src);
//	return (0);
//}
