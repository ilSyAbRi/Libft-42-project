/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:47:53 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/10/31 19:44:49 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <string.h>

// n = n byte from src to dest
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == src || n == 0)
		return (dest);
	else if (src > dest)
		return (ft_memcpy(dest, src, n));
	else
	{
		i = n;
		while (i > 0)
		{
			((unsigned char *)dest)[i - 1] = ((unsigned char *)src)[i - 1];
			i--;
		}
	}
	return (dest);
}

/*int	main(void)
{
	char	src[] = "iliass";
	char	*dest = &src[2];

	printf("%s\n",(unsigned char *)ft_memmove(dest, src, sizeof(char) * 5));
}*/
