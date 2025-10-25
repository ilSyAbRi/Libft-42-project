/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 18:12:57 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/10/21 18:28:01 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	b[] = "hello";
	char	c[] = "helLo";
	int		res1;
	int		res2;
	int		x[] = {1, 2, 3};
	int		y[] = {1, 2, 4};
	int		res3;

	char	a[] = "hello";
	res1 = ft_memcmp(a, b, 5);
	res2 = ft_memcmp(a, c, 5);
	printf("ft_memcmp(a, b, 5) = %d\n", res1);
	printf("ft_memcmp(a, c, 5) = %d\n", res2);
	res3 = ft_memcmp(x, y, 3 * sizeof(int));
	printf("ft_memcmp(x, y, 3*sizeof(int)) = %d\n", res3);
	// char *s1 = "helloa";
	// char *s2 = "hello";
	printf("%d\n", my_memcmp("helloa", "hello", 6));
	printf("%d", memcmp("hellc", "hellb", 5));
	return (0);
}*/
