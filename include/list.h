/*
** list.h for list in /home/bourhi_a/rendu/MUL_2013_rtv1
** 
** Made by amine bourhime
** Login   <bourhi_a@epitech.net>
** 
** Started on  Thu Mar 13 05:15:43 2014 
** Last update Tue May 13 02:07:37 2014 
*/

#ifndef			LIST_H_
# define		LIST_H_

typedef struct		s_list
{
  void			*data;
  struct s_list		*next;
  struct s_list		*prev;
}			t_list;

typedef struct		s_glist
{
  t_list		*list;
  t_list		*last_elem;
}			t_glist;

t_glist			*init_list();
int			push_back(t_glist *lst, void *data);
int			push_front(t_glist *lst, void *data);
int			list_len(t_glist *lst);
int			rm_last(t_glist *lst);
int			rm_first(t_glist *lst);
int			sort_list(t_glist *lst, int (*cmp)(void*, void*));
int			in_lst(t_glist*, void*, int (*cmp)(void*, void*));
int			rm_elem(t_glist*, void *data, int (*cmp)(void*, void*));

t_list			*get_rev(t_list *lst);

#endif			/* LIST_H_ */
