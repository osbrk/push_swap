/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:50:28 by osukhore          #+#    #+#             */
/*   Updated: 2025/11/03 11:02:43 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (s == 0 || f == 0)
		return (0);
	str = (char *)ft_strdup(s);
	if (str == 0)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		str[i] = f(i, str[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
////COMMENT FROM HERE!
//#include <ctype.h>
//#include <limits.h>
//#include <fcntl.h>
//#include <stdio.h>
//#include <string.h>
//#include <strings.h>
//#include <bsd/string.h>
//
//static char	helper_strmapi(unsigned int i, char c)
//{
//	i = 32;
//	if (c >= 97 && c <= 122)
//		c -= i;
//	return (c);
//}
//
//int	main(int argc, char **argv)
//{
//	char	str[] = "Never gonna give you up, never gonna let you down";
//	char	*result;
//	char	*argv_str;
//	char	*argv_result;
//
//	//ERROR CHECK
//	if (argc < 2)
//	{
//		printf("\e[1;31;7m ERROR! \e[0m"
//			"\e[1;7m Need ARGV to work with! \e[0m\n"
//			"\e[1;7m |1. String| \e[0m\n");
//		return (0);
//	}
//	argv_str = argv[1];
//
//	//FILE NAME
//	printf("\n\e[1;7m ft_strmapi.c \e[0m\n\n");
//		printf("\e[3m*Helper function transforms "
//		"lowercase to uppercase.\e[0m\n");
//	printf("--------------------------------------------\n\n");
//	//TEST 1: USING ARGV
//	printf("Test 1: Using ARGV\n");
//	printf("%s\n\n", argv_str);
//	printf("My result:\n");
//	argv_result = ft_strmapi(argv_str, helper_strmapi);
//	if (argv_result)
//		printf("\e[34m%s\e[0m\n\n", argv_result);
//	else
//		printf("\e[34m(null)\e[0m\n\n");
//	free(argv_result);
//	printf("--------------------------------------------\n\n");
//
//	//TEST 2: SIMPLE TEST
//	printf("Test 2: Simple test\n");
//	printf("%s\n\n", str);
//	printf("My result:\n");
//	result = ft_strmapi(str, helper_strmapi);
//	if (result)
//		printf("\e[34m%s\e[0m\n", result);
//	else
//		printf("\e[34m(null)\e[0m\n");
//	printf("\n--------------------------------------------\n\n");
//
//	//JOB DONE
//	printf("\e[1;7m Job done! \e[0m\n");
//	free(result);
//	return (0);
//}
