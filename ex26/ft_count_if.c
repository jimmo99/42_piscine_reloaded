/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <ssaavedr@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 18:24:18 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/09/28 18:24:30 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	i;
	int	count;

	if (tab == 0 || f == 0)
		return (0);
	i = 0;
	count = 0;
	while (tab[i] != 0)
	{
		if ((*f)(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}
