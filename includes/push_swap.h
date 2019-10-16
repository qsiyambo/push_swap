/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <qsiyambo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 08:53:09 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/09/19 09:14:08 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct		s_stack
{
	int				num;
	struct s_stack	*next;
}					t_stack;

void				sort_three(t_stack *a_stk);
void				sort_sa(t_stack *a_stk);
void				sort_ra(t_stack *a_stk);
void				sort_rra(t_stack *a_stk);
void				sort_rra2(t_stack **a_stk);
void				sort_ra2(t_stack **a_stk);
void				pa(t_stack **a_stk, t_stack **b_stk);
void				pb(t_stack **a_stk, t_stack **b_stk);
void				chksort_sa(t_stack *a_stk);
void				chksort_ra(t_stack *a_stk);
void				chksort_rra(t_stack *a_stk);
void				chksort_rra2(t_stack **a_stk);
void				chksort_ra2(t_stack **a_stk);
void				chksort_ss(t_stack **a_stk, t_stack **b_stk);
void				chksort_rrr(t_stack **a_stk, t_stack **b_stk);
void				chksort_rr(t_stack **a_stk, t_stack **b_stk);
void				chksort_pb(t_stack **a_stk, t_stack **b_stk);
void				chksort_pa(t_stack **a_stk, t_stack **b_stk);
void				handler(t_stack **a_stk, t_stack **b_stk);
void				handler_assist(t_stack **a, t_stack **b,
					int *indx, int len);
int					is_sort(t_stack *a_stk);
int					find_min(t_stack **a_stk);
void				find_min_assist(t_stack **a_stk, int indx, int indx2);
int					check_int(t_stack *a_stk);
int					check_int_first(t_stack **a_stk);
int					check_int_sec(t_stack **a_stk);
void				first_cond(t_stack **a_stk, t_stack **b_stk);
void				second_cond(t_stack **a_stk, t_stack **b_stk);
int					ft_lstlen(t_stack **a_stk);
void				display_stack(t_stack *a_stk);
void				free_stacks(t_stack **a_stk);
void				free_all(t_stack **a_stk, t_stack **b_stk);
void				free_split(char **str);
int					do_steps(char *str, t_stack **a_stk, t_stack **b_stk);
int					check_steps(char *str);
void				start_read(t_stack **a_stk, t_stack **b_stk);
t_stack				*creat_stack(char **src, int nums);
int					duplicates(t_stack *stack);
void				find_min2(t_stack **a_stk, int max);
void				a_stk_ra_rra(t_stack **a_stk, int pos1, int pos2, int len);
void				b_stk_2_ra_rra(t_stack **b_stk,
					int pos1, int pos2, int len);
void				b_stk_1_ra_rra(t_stack **b_stk, int pos1,
					int pos2, int len);
void				find_min_max(t_stack **b_stack, int max);
void				find_min_max2(t_stack **b_stack, int max);
int					pos_front(t_stack **a_sstk, int max);
int					pos_back(t_stack **a_stk, int max);
int					pos_min(t_stack **b_sstk, int max);
int					pos_max(t_stack **b_stk, int max);
int					pos_max2(t_stack **b_stk, int max);
void				sort_stacks(t_stack **a_stk, t_stack **b_stk);
void				fstmove_to_a(t_stack **a_stk, t_stack **b_stk);
void				sort_first_half(t_stack **a_stk, t_stack **b_stk, int len);
void				sort_sec_half(t_stack **a_stk, t_stack **b_stk, int len);
void				sort_sec_assist(t_stack **a_stk, t_stack **b_stk,
					int mid, int len);
void				rrr_assist(t_stack **a_stk, t_stack **b_stk, int mid);
void				sort_ra_mid(t_stack **a_stk, int mid);
void				sort_pb_mid(t_stack **a_stk, t_stack **b_stk, int mid);
void				sort_last_half(t_stack **a_stk, t_stack **b_stk, int len);
void				nth_move_to_a(t_stack **a_stk, t_stack **b_stk);
void				sort_tab(int *tab, int len);
int					mid_value(t_stack **a_stk, int len);
int					pos_return(t_stack **b_stk, int fst, int lst);
int					max_check(char **src);
int					duplicates_2(char **src);
int					valid_input(char **argv);
void				starting(char **av, int nbs, t_stack **a, t_stack **b);
void				a_rmove(t_stack **a_stk, int posx, int posy, int len);
void				b_rmove(t_stack **b_stk, int posx, int posy, int len);
void				pa_or_ra(t_stack **a_stk, t_stack **b_stk, int mid);
int					check_arr(char **arr);
int					check_num(char **arr);
int					arg_error(char **arr);
int					read_stdin(t_stack **a_stk, t_stack **b_stk);
t_stack				*create_list(int n, char **av);
void				add_end(t_stack **start, t_stack *ptr);
#endif
