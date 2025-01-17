#ifndef HEADER_H
# define HEADER_H

# define TYPE_OF_ID		unsigned long
# define TYPE_OF_TYPE	char
# define TYPE_OF_FINE	double
# define TYPE_OF_CHARGE	double
# define TYPE_OF_WORD	char
# define EULER			(double) 2.718281228459045//23536...

# define STRESS_ERROR			"Stress"
# define GENERAL_ERROR			"Error"
# define GENERAL_ERROR_DETAIL	"Detail"
# define BRAIN_ERROR_MSG		"brain creation, (not enough static genome?) stress "
# define NEU_ID_NOT_FOUND		"(internal) neuron not found in genome (version problem?) "

# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <time.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <string.h> // strcpy

# include "defs.h"
# include "helperdefs.h"
# include "typedefs.h"

// main.c
int		main(int argc, char **argv);
int		init_envt(void);
void	option(char	*op);
int		main2(void);

// genome.c
void	init_genome();
neu		*gen_neuron(typ t, int n);
tid		rnd_from_genome(typ t);
neu		*init_neu(void);

// brain.c
bra		*init_brain	\
		(tid b, tid i, tid h, tid o, tid a);
net		*rnd_neu (typ t, int q, bra *b);
net		*init_net(void);

// thoughts.c
void	feed(bra *b, tid id, fin v);
void	feed_nd(net *nd);
void	think(bra *b);
void	operate(net *n);
void	fire(bra *b, fin f, tid id);
void	load_modules(void);

// helper.c
int		strm(char *a, char *b);
tid		count_neu(neu *l);
neu		*neuron_by_id(tid id);
neu		*g_axon_by_id(tid id);
tid		axon_ou(tid id);
tid		axon_in(tid id);
net		*neuron_in_brain(bra *b, tid nid);
int		find_id(tid id, net *n);
net		*i_to_b_niche(int i, bra *b);
neu		*i_to_g_niche(int i);
double	sigmoid(double v);
net		*prepend_cp(net *ne, net *n);
char	*filename_str(char *fn);
mod		*init_mod(void);
void	append_module(char *m_n, void *m_a);
int		exec(char *m_n, net *n);

// filer.c
void	save_genome(char *fn, void *dt);
void	load_genome(char *fn, void *dt);

// debug.c
void	imsg(char *str, int v);
void	error_msg(char *str);
void	msgs(char *str);
void	msgi(int inty);
void	print_genome(void);
void	print_brain(bra *b);
char	*get_typename(typ t);
void	print_neu_list(neu *n);
void	print_net_list(net *n);
void	print_neuron(neu *neuron);
void	logi(char *c, int n);
void	logx(char *c, int n);
void	logp(char *c, void *n);
void	print_net_herd(net *n);
void	print_resp(net *n);
char	*gauge_bar(fin v);
char	*format_p(char *str);
int		is_dumb(net *na);
int		is_conn(net *na, net *ni);
int		is_conn_netneu(net *na, neu *ni);
void	print_modules(void);

// random.c
void	init_rnd(void);
double	rnd01(void);
double	rnd(double max);
int		irnd(double max);
int		rndi(double min, double max);
int		izrnd(double max);
int		brnd(double chance);
void	tic(fin ms);
void	color(int c);

#endif
