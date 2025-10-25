/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 20:01:48 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/10/23 17:53:23 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>

/* nmemb * size > max_size -> nmemb > max_size / size -> 5 * 2 > 10 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*ptr;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (nmemb > ((size_t)-1) / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	while (i < (nmemb * size))
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

/*int	main(void)
{
	int		*arr;
	int		i;
	char	*str;

	arr = ft_calloc(3, sizeof(int));
	i = 0;
	while (i < 3)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	str = ft_calloc(4, sizeof(char));
	i = 0;
	while (i < 4)
	{
		printf("%d ", str[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
