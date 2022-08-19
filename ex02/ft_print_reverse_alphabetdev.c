/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabetdev.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng <mcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:11:42 by mcheng            #+#    #+#             */
/*   Updated: 2022/08/19 11:44:57 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		write(1, &letter, 1);
		letter--;
	}
}

int		main(void)
{
	ft_print_reverse_alphabet();
}
