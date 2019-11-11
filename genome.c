/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   genome.c                                                                 */
/*                                                  ||||||:||||::|||:|:|||:   */
/*   By: |||||| <::::::>                            ::||:||:|::||::|:||::::   */
/*                                                  |:|:|:::|::|::::::|||||   */
/*   Created: 2019/11/08 09:28:31 by ||||||                                   */
/*   Updated: 2019/11/11 12:44:03 by ||||||                                   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void		*init_genome(void)
{
	g_genome = malloc(sizeof(gnm));
	g_genome->bias = gen_neuron(TP_B, GENB);
	g_genome->inpu = gen_neuron(TP_I, GENI);
	g_genome->hidd = gen_neuron(TP_H, GENH);
	g_genome->outp = gen_neuron(TP_O, GENO);
	g_genome->axon = gen_neuron(TP_A, GENA);

	print_genome();
	return ;
}

neu			*gen_neuron(t_type t, int n)
{
	neu			*neuron;
	neu			*next;

	next = 0;
	while (--n > -1)
	{
		neuron = malloc(sizeof(neu));
		neuron->id = ++g_id;
		neuron->type = t;
		if (t & TP_A)
		{
			neuron->in = rnd_from_genome( \
				TP_B + TP_I + TP_H).id;
			neuron->out = rnd_from_genome( \
				TP_H + TP_O).id;
		}
		else
		{
			neuron->in = 0;
			neuron->out = 0;
		}
		neuron->threshold = rnd01();
		neuron->op = 0;
		neuron->innov = ++g_innov;
		neuron->next = next;
		print_neuron(neuron);
		next = neuron;
	}
	return (neuron);
}

neuidinn	rnd_from_genome(t_type t)
{
	net			rnd_list;
	t_id		rnd_l;
	neuidinn	out;

	rnd_list.next = 0;
	rnd_l = 0;
	if (t & TP_B)
		rnd_l += net_neu_concat(g_genome->bias, rnd_list);
	if (t & TP_I)
		rnd_l += net_neu_concat(g_genome->inpu, rnd_list);
	if (t & TP_H)
		rnd_l += net_neu_concat(g_genome->hidd, rnd_list);
	if (t & TP_O)
		rnd_l += net_neu_concat(g_genome->outp, rnd_list);
	if (t & TP_A)
		rnd_l += net_neu_concat(g_genome->axon, rnd_list);

	out.id = 0;
	out.innov = 0;
	return (out);
}