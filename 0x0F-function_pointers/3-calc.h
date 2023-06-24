#ifndef CALC_H
#define CALC_H
/**
 * struct op - A struct op.
 * @op: The operator.
 * @f: The associated function.
 */
	typedef struct op
{
	char *op;
	int (*f)(int p, int k);
} op_t;


int op_add(int p, int k);
int op_sub(int p, int k);
int op_mul(int p, int k);
int op_div(int p, int k);
int op_mod(int p, int k);
int (*get_op_func(char *s))(int, int);


	#endif

