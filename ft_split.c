/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:33:13 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/10/24 22:58:10 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char			*ft_substr(char const *s, unsigned int start, size_t len);

static size_t	ft_count_word(const char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
			i--;
		}
		i++;
	}
	return (count);
}

static size_t	ft_count_letter(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static char	**do_free(char ***ptr, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free((*ptr)[i]);
		(*ptr)[i] = NULL;
		i++;
	}
	*ptr = NULL;
	return (*ptr);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**ptr;

	if (s == NULL)
		return (NULL);
	ptr = malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (ptr == NULL)
		return (NULL);
	j = 0;
	i = 0;
	while (i < ft_count_word(s, c))
	{
		while (s[j] && s[j] == c)
			j++;
		ptr[i] = ft_substr(&s[j], 0, ft_count_letter(&s[j], c));
		if (ptr[i] == NULL)
			return (do_free(&ptr, i));
		j = j + ft_count_letter(&s[j], c);
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}
/*int	main(int argc, char *argv[])
{

	if (argc == 2)
	{
		size_t i;
		char **ptr;

		ptr = ft_split(argv[1], ' ');
		i = 0;
		while (ptr[i] != NULL)
		{
			printf("%s\n", ptr[i]);
			i++;
		}
		ptr = do_free(&ptr, i);
	}
}*/
