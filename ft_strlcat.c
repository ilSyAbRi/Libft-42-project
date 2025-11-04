/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:24:14 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/10/31 19:33:42 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <string.h>
//#include <bsd/string.h>

// size = buffer of dst
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (i < size && dst[i] != '\0')
		i++;
	if (i == size)
		return (size + ft_strlen(src));
	while (src[j] && j + i < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

/*int main(void)
{
	char buf[10] = "abc";

	printf("Return: %zu\n", ft_strlcat(buf,"def", 10));
	printf("Buffer: %s\n", buf);

	return (0);
}*/
