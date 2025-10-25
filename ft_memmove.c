/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:47:53 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/10/18 15:37:25 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <string.h>

// n = buffer src
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = n;
	if (dest == NULL || src == NULL)
		return (NULL);
	while (i > 0)
	{
		((unsigned char *)dest)[i - 1] = ((unsigned char *)src)[i - 1];
		i--;
	}
	return (dest);
}

/*int	main(void)
{
	int	src[] = {1000, 2, 3, 4, 5, 6, 7};
	int	dest[7];
	int	i;

	ft_memmove(dest, src, sizeof(int) * 7);
	i = 0;
	while (i < 7)
	{
		printf("%d\n", dest[i]);
		i++;
	}
}*/
