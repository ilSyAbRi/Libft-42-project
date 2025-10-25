/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:34:54 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/10/21 16:08:03 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

//#include <string.h>
// n = number of byte

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (i < n)
	{
		if (((const unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)((unsigned char *)s + i));
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	int	arr[4] = {10, -1, 30, 40};
	int	*p;

	// Search for byte 20 in the array
	p = memchr(arr, 255, sizeof(arr));
	if (p)
		printf("Found at byte offset: %ld\n", ((char *)p - (char *)arr));
	else
		printf("Not found\n");
	return (0);
}*/
