/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_info.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skurosu <skurosu@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 01:42:40 by skurosu           #+#    #+#             */
/*   Updated: 2020/12/04 00:30:47 by skurosu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

void	swap_info(t_info *info1, t_info *info2)
{
	t_info tmp;

	tmp.name = info1->name;
	tmp.mtime = info1->mtime;
	tmp.mtime_nsec = info1->mtime_nsec;
	info1->name = info2->name;
	info1->mtime = info2->mtime;
	info1->mtime_nsec = info2->mtime_nsec;
	info2->name = tmp.name;
	info2->mtime = tmp.mtime;
	info2->mtime_nsec = tmp.mtime_nsec;
}
