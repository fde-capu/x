/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.c                                                                   */
/*                                                  ||||||:||||::|||:|:|||:   */
/*   By: |||||| <::::::>                            ::||:||:|::||::|:||::::   */
/*                                                  |:|:|:::|::|::::::|||||   */
/*   Created: 2019/11/07 00:42:43 by ||||||                                   */
/*   Updated: 2019/11/20 03:36:38 by ||||||                                   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"



int	main(void)
{
	color(COLOR_FORE);
	bra	*b;
	int	i;
	tid	nchoice;

	init_rnd();
	g_id = 0;
	g_iv = 0;
	init_genome(	\
		GENB,		\
		GENI,		\
		GENH,		\
		GENO,		\
		GENA		\
	);
	print_genome();

	b =	init_brain(	\
		DEFB,		\
		DEFI,		\
		DEFH,		\
		DEFO,		\
		DEFA 		\
	);


	while (++i < 500)
	{
		nchoice = rndi(2, 4);
		feed(b, nchoice, rnd01() * 0.2);
		print_brain(b);
		tic(TIC_SEC);
		think(b);
		print_brain(b);
		tic(TIC_SEC);
	}

	return (0);
}


// v.
// types of action (op):
//  - threshold (spark)
//  	(after threshold yelds 1 to each con)
//  - capacitor = high pass
//  	(after threshold yelds val)
//  - capacitor = low pass
//  	(only throws val if lower than threshold)
//  - capacitor dispenser:
//    	(above thres outs only diff from thres)
//  - linear
//  	(multiply by threshold) <-- axons
//  - partial leak
//  	(leak only threshold by each time)
//  - gradative leak
//  	(leak from bz/tr proportion increasinly) 
//  - regressive leak
//  	(leak from bz/tr proportion diminishing) 
//  - ducking
//  	(after tr, tr goes 0 and gradually increases) 
//  - reverb
//  	(always sum fraction of previous out)
//  - delay
//  	(remember past steps and repeat in cicles, decreasinly)
//  - equalizer
//  	(filter bands)
//
// types of reduction (re):
//  - sum_clip : no reduction, only sum until 1
//  - sigmoid
//  
//
// brain log trace
