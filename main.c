/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.c                                                                   */
/*                                                  ||||||:||||::|||:|:|||:   */
/*   By: |||||| <::::::>                            ::||:||:|::||::|:||::::   */
/*                                                  |:|:|:::|::|::::::|||||   */
/*   Created: 2019/11/07 00:42:43 by ||||||                                   */
/*   Updated: 2019/11/08 08:57:30 by ||||||                                   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(void)
{
	bra	*b;

	init_rnd();
	b = \
		init_brain(      \
			DEFB, \
			DEFI, \
			DEFH, \
			DEFO, \
			DEFA  \
		);

	//init_biases();
//	init_inputs();
//	init_hiddens();
//	init_outputs();
//	init_axons();
	return (0);
}
