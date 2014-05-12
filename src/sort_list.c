/*
** sort_list.c for list in /home/bourhi_a/rendu/prog_elem/lem_in/src
** 
** Made by amine bourhime
** Login   <bourhi_a@epitech.net>
** 
** Started on  Sat May  3 23:01:03 2014 
** Last update Mon May 12 17:55:34 2014 
*/

#include <list.h>

int		sort_list(t_list *lst, int (*cmp)(void*, void*))
{
  void		*data;
  int		x_flag;
  t_list	*tmp_w;

  x_flag = 1;
  while (x_flag && (tmp_w = lst) && !(x_flag = 0))
    while (tmp_w && tmp_w->next)
      {
	if (cmp(tmp_w->data, tmp_w->next->data) == 2 && (x_flag = 1))
	  {
	    data = tmp_w->data;
	    tmp_w->data = tmp_w->next->data;
	    tmp_w->next->data = data;
	  }
	tmp_w = tmp_w->next;
      }
  return (!0x0);
}
