/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   helper.c                                                                 */
/*                                                  ||||||:||||::|||:|:|||:   */
/*   By: |||||| <::::::>                            ::||:||:|::||::|:||::::   */
/*                                                  |:|:|:::|::|::::::|||||   */
/*   Created: 2019/11/08 12:03:46 by ||||||                                   */
/*   Updated: 2019/11/14 09:46:53 by ||||||                                   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"


nii		get_neu_from_net \
	(int n, net *l)
{
	nii	out;

	return (out);
}

tid	count_neu(neu *a)
{
	tid	c;

	c = 0;
	while (a)
	{
		c++;
		a = a->next;
	}
	return (c);
}
