/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 10:10:12 by osukhore          #+#    #+#             */
/*   Updated: 2025/11/03 11:02:23 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s == 0 || f == 0)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

//#include <ctype.h>
//#include <limits.h>
//#include <fcntl.h>
//#include <stdio.h>
//#include <string.h>
//#include <strings.h>
//#include <bsd/string.h>
////COMMENT FROM HERE!!!!!
//static void	helper_striteri(unsigned int i, char *str)
//{
//	i = 0;
//	if (str[i] >= 97 && str[i] <= 122)
//		str[i] -= 32;
//}
//
//int	main(int argc, char **argv)
//{
//	char	str[] = "Never gonna give you up, never gonna let you down";
//	char	*argv_str  = argv[1];
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
//	printf("\n\e[1;7m ft_striteri.c \e[0m\n\n");
//	printf("--------------------------------------------\n\n");
//
//	//TEST 1: USING ARGV
//	printf("Test 1: Using ARGV\n");
//	printf("%s\n\n", argv_str);
//	printf("My result:\n");
//	ft_striteri(argv_str, helper_striteri);
//	printf("\e[34m%s\e[0m\n\n", argv_str);
//	printf("--------------------------------------------\n\n");
//
//	//TEST 2: SIMPLE TEST
//	printf("Test 2: Simple test\n");
//	printf("%s\n\n", str);
//	printf("My result:\n");
//	ft_striteri(str, helper_striteri);
//	printf("\e[34m%s\e[0m\n", str);
//	printf("\n--------------------------------------------\n\n");
//
//	//JOB DONE
//	printf("\e[1;7m Job done! \e[0m\n");
//	return (0);
//}
