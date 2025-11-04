/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 01:14:16 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/01 04:05:51 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static	char add_index_to_ch(unsigned int i, char c)
{
	return (c + i);
}
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	ptr = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*#include <stdio.h>
int	main(void)
{
	char arr[] = "aaaaaa";
	printf("%s\n",ft_strmapi(arr,add_index_to_ch));
}*/
