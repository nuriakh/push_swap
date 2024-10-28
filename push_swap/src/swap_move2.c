#include <stdio.h>
#include <stdlib.h>
#include "../libr/ft_printf.h"
#include "../push_swap.h"

void    ra(t_stk *stk)
{
	int tmp;
	int i;
	
	if (stk->size_a < 2)
		return;
	tmp = stk->a[0]; //записали первый элемент во времен переменную
	i = 1;
	while (i < stk->size_a)
	{
		stk->a[i-1] = stk->a[i];
		i++;
	}
	stk->a[i-1] = tmp;
	ft_printf("ra\n");
}
void    rb(t_stk *stk)
{
	int tmp;
	int i;
	
	if (stk->size_b < 2)
		return;
	tmp = stk->b[0]; //записали первый элемент во времен переменную
	i = 1;
	while (i < stk->size_b)
	{
		stk->b[i-1] = stk->b[i];
		i++;
	}
	stk->b[i-1] = tmp;
	ft_printf("rb\n");
}
void    rra(t_stk *stk)
{
	int tmp;
	int i;
	
	if (stk->size_a < 2)
		return;
	tmp = stk->a[stk->size_a - 1]; // чтоб получить последнее число
	i = stk->size_a - 2;
	while (i >= 0)
	{
		stk->a[i + 1] = stk->a[i];
		i--;
	}
	stk->a[0] = tmp;
	ft_printf("rra\n");
}
void    rrb(t_stk *stk)
{
	int tmp;
	int i;
	
	if (stk->size_b < 2)
		return;
	tmp = stk->b[stk->size_b - 1]; // чтоб получить последнее число
	i = stk->size_b - 2;
	while (i >= 0)
	{
		stk->b[i + 1] = stk->b[i];
		i--;
	}
	stk->b[0] = tmp;
	ft_printf("rrb\n");
}