/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:02:09 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/01 04:15:26 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len_s1;
	size_t	len_s2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	ptr = malloc(len_s1 + len_s2 + 1);
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s1, len_s1);
	ft_memcpy(ptr + len_s1, s2, len_s2);
	ptr[len_s1 + len_s2] = '\0';
	return (ptr);
}

/*#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*result;

	// Test 1: normal strings
	s1 = "Hello";
	s2 = "World";
	result = ft_strjoin(s1, s2);
	printf("Test 1: %s\n", result); // Expected: HelloWorld
	free(result);
	// Test 2: empty s1
	s1 = "";
	s2 = "World";
	result = ft_strjoin(s1, s2);
	printf("Test 2: %s\n", result); // Expected: World
	free(result);
	// Test 3: empty s2
	s1 = "Hello";
	s2 = "";
	result = ft_strjoin(s1, s2);
	printf("Test 3: %s\n", result); // Expected: Hello
	free(result);
	// Test 4: both empty
	s1 = "";
	s2 = "";
	result = ft_strjoin(s1, s2);
	printf("Test 4: %s\n", result); // Expected: (empty string)
	free(result);
	// Test 5: NULL input
	result = ft_strjoin(NULL, "World");
	printf("Test 5: %p\n", result); // Expected: (nil)
	result = ft_strjoin("Hello", NULL);
	printf("Test 6: %p\n", result); // Expected: (nil)
	return (0);
}*/
