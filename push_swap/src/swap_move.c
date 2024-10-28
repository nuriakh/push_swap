#include <stdio.h>
#include <stdlib.h>
#include "../libr/ft_printf.h"
#include "../push_swap.h"

void    sa(t_stk *stk)
{
	int tmp;
	
	if(stk->size_a < 2)
		return;
	tmp = stk->a[0];
	stk->a[0] = stk->a[1];
	stk->a[1] = tmp;
	ft_printf("sa\n");
}
void    sb(t_stk *stk)
{
	int tmp;
	
	if(stk->size_b < 2)
		return;
	tmp = stk->b[0];
	stk->b[0] = stk->b[1];
	stk->b[1] = tmp;
	ft_printf("sb\n");
}
// void    ss(t_stk *stk)
// {
// 	int tmp1;
// 	int tmp2;
	
// 	if(stk->size_a < 2 || stk->size_b < 2)
// 		return;
// 	tmp1 = stk->a[0];
// 	stk->a[0] = stk->a[1];
// 	stk->a[1] = tmp1;
	
// 	tmp2 = stk->b[0];
// 	stk->b[0] = stk->b[1];
// 	stk->b[1] = tmp2;
// 	ft_printf("ss\n");
//}
void    pa(t_stk *stk)
{
	int i;
	
	if (stk->size_b)
	{
		stk->size_a++;
		i = stk->size_a;
		while (--i > 0)
			stk->a[i] = stk->a[i-1];
		stk->a[0] = stk->b[0]; // закинули число в стек "a"
		i = -1;
		stk->size_b--;
		while (++i < stk->size_b)
			stk->b[i] = stk->b[i+1];
		ft_printf("pa\n");
	}
	return;
}
void    pb(t_stk *stk)
{
	int i;
	
	if (stk->size_a)
	{
		stk->size_b++;
		i = stk->size_b;
		while (--i > 0)
			stk->b[i] = stk->b[i-1];
		stk->b[0] = stk->a[0]; // закинули число в стек "b"
		i = -1;
		stk->size_a--;
		while (++i < stk->size_a)
			stk->a[i] = stk->a[i+1];
		ft_printf("pb\n");
	}
	return;
}
