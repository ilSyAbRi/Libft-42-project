/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:48:07 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/10/16 00:21:09 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*keep;

	keep = NULL;
	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
	{
		if (c == s[i])
			keep = &s[i];
		i++;
	}
	if (c == s[i])
		keep = &s[i];
	return ((char *)keep);
}

/*int main()
{
	char *str = "hello world";
	char c = 'l';

	printf("%s\n",ft_strrchr(str,c));
}*/
