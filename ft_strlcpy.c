/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:53:28 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/10/30 16:53:27 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <bsd/string.h>
//#include <stdio.h>

// size = buffer dst
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*int	main(void)
{
	char dst[7];
	char *src = "iliass";

	printf("%zu\n",ft_strlcpy(dst,src,7));
	printf("%s\n",dst);
}*/
