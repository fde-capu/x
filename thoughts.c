/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   thoughts.c                                                               */
/*                                                  ||||||:||||::|||:|:|||:   */
/*   By: |||||| <::::::>                            ::||:||:|::||::|:||::::   */
/*                                                  |:|:|:::|::|::::::|||||   */
/*   Created: 2019/11/18 12:10:45 by ||||||                                   */
/*   Updated: 2019/11/18 12:12:25 by ||||||                                   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	feed(bra *b, tid id)
{
	net	*p;

	p = b->inpu;
	while ((p->id != id) && (p->nx))
		p = p->nx;
	p->bz = 1;
	return ;
}

void	think(bra *b)
{
	return ;
}
