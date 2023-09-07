/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:01:00 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/07 17:01:00 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const char	*ft_strrchr(const char *s, int c)
{
	int		i;
	const char	*res;

	i = 0;
	res = 0;
	while (s[i])
	{
		if (s[i] == c)
			res = &s[i];
		i++;
	}
	if (s[i] == c)
		return (&s[i]);
	return (res);
}