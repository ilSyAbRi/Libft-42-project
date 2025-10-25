/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:23:47 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/10/25 06:10:41 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t			ft_strlen(const char *s);

char			*ft_substr(char const *s, unsigned int start, size_t len);

static size_t	check_it_is_in_s1(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t	check_start(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i])
	{
		if (check_it_is_in_s1(s1[i], set) == 0)
			break ;
		i++;
	}
	return (i);
}

static int	check_len(char const *s1, char const *set, size_t start)
{
	size_t	len;

	len = ft_strlen(s1);
	while (len > 0)
	{
		if (check_it_is_in_s1(s1[len - 1], set) == 0)
			break ;
		len--;
	}
	len = len - start;
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = check_start(s1, set);
	len = check_len(s1, set, start);
	return (ft_substr(s1, start, len));
}

/*#include <stdio.h>

int	main(void)
{
	printf("Result: '%s'\n", ft_strtrim("iiiii", "i"));
	printf("Result: '%s'\n", ft_strtrim("abccba", "ab"));
	printf("Result: '%s'\n", ft_strtrim("   hello  ", " "));
	printf("Result: '%s'\n", ft_strtrim("", " "));
	printf("Result: '%s'\n", ft_strtrim("hello", ""));
}*/
