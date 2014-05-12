/*
** list.h for list in /home/bourhi_a/rendu/MUL_2013_rtv1
** 
** Made by amine bourhime
** Login   <bourhi_a@epitech.net>
** 
** Started on  Thu Mar 13 05:15:43 2014 
** Last update Mon May 12 17:44:53 2014 
*/

#ifndef				LIST_H_
# define			LIST_H_

typedef struct		s_list
{
  void			*data;
  struct s_list		*next;
}			t_list;

/*
** Push element at the begin of the list, return 0 if cant malloc.
*/
int			push_front(t_list **lst, void *data);

/*
** Push element at the end of the list, return 0 if cant malloc.
*/
int			push_back(t_list **lst, void *data);

/*
** Return size of the list.
*/
int			list_len(t_list *lst);

/*
** This function sort list, take in params the list and a function.
** prototype of the function: function(void *d1, void *d2)
** it must compare the two elements and return : 1 if d1 > d2, 2 if d1 == d2 or 3 if d1 < d2
** if want to sort in the oppsite sens, return 1 instead of 3 and vice-versa.
*/
int			sort_list(t_list *lst, int (*cmp)(void*, void*));

/*
** Return the last element of the list
*/
t_list			*last_node(t_list *lst);

/*
** This functions is like the sort function. it take the list and comparison function.
** the functions take two data element and return 1 if equal, 0 if not.
*/
int			in_lst(t_list*, void*, int (*cmp)(void*, void*));

/*
** Remove the last element.
*/
int			rm_last(t_list **lst);

/*
** Remove the first element.
*/

int			rm_first(t_list **lst);

/*
** Remove specific element with comparison function in param.
*/
void			rm_elem(t_list**, void *data, int (*cmp)(void*, void*));

/*
** Creat new list and put in it the inv of the list passed as parameter.
*/
t_list			*get_rev(t_list *lst);

#endif				/* LIST_H_ */
