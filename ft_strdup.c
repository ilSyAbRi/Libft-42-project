/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:45:48 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/10/19 19:02:54 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "stdlib.h"
//#include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*ptr;

	i = 0;
	if (s == NULL)
		return (NULL);
	ptr = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (ptr == NULL)
		return (NULL);
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*int	main(void)
{
	char	*original;
	char	*copy;

	original = "hello";
	copy = ft_strdup(original);
	if (copy != NULL)
		printf("%s\n", copy);
}*/
