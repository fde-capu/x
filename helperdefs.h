# define STR_HELPER(x) #x
# define STR(x) STR_HELPER(x)
# define STRESSIN int stress = STRESS;
# define STRESS_BRAIN_CREATION int stress = STRESS_BRAIN;
# define STRESSOUT if(!--stress) {FAIL(STRESS_ERROR);}
# define STRESSMSG(s) if(!--stress) {FAIL(s);}
# define BRAIN_ERROR BRAIN_ERROR_MSG STR(STRESS_BRAIN)
# define FAIL(f) FAIL_S(f)
# define FAIL_S(f) { error_msg(f); exit (1); }
# define FAIL_SSI(f,m,v) { error_msg(f); imsg(m,v); exit (1); }
# define LOGI(c,n) logi(c,n);
# define TIC tic(TIC_SEC);
# define TICC tic(TIC_SEC * 4);
# define CLS printf("%c[2J%c[;H", (char) 27, (char) 27); FLUSH
# define NL printf("\n");
# define FLUSH fflush(stdout);
# define TTPB	if (t & TP_B)
# define TTPI	if (t & TP_I)
# define TTPH	if (t & TP_H)
# define TTPO	if (t & TP_O)
# define TTPA	if (t & TP_A)
