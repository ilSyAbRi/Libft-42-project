/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 20:15:46 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/10/30 16:52:51 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	int	dest[7];
	int	src[] = {1, 2, 3, 4, 5, 6, 7};
	int	i;
	int	*p;
	// char src[] = "iliass";

	i = 0;
	p = ft_memcpy(dest,src,sizeof(int) * 7);
	while (i < 7)
	{
		printf("%d\n", p[i]);
		i++;
	}
		/
			| Address | Byte 0 | Byte 1 | Byte 2 | Byte 3 |
			| ------- | ------ | ------ | ------ | ------ |
			| src[0]  | 01     | 00     | 00     | 00     |
			| src[1]  | 02     | 00     | 00     | 00     |
			| src[2]  | 03     | 00     | 00     | 00     |
			| src[3]  | 04     | 00     | 00     | 00     |
			| src[4]  | 05     | 00     | 00     | 00     |
			| src[5]  | 06     | 00     | 00     | 00     |
			| src[6]  | 07     | 00     | 00     | 00     |
		/

}*/
