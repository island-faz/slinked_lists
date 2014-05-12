/*
** rm_elem.c for list in /home/bourhi_a/rendu/PSU_2013_minitalk
** 
** Made by amine bourhime
** Login   <bourhi_a@epitech.net>
** 
** Started on  Thu Mar 20 20:07:10 2014 
** Last update Mon May 12 17:54:13 2014 
*/

#include <list.h>

void		rm_elem(t_list **lst, void *data, int (*fmt)(void*, void*))
{
  t_list	*tmp;
  int		flag;
  void		*f_free;

  if (!(*lst))
    return ;
  tmp = *lst;
  if (fmt(tmp->data, data))
    tmp = tmp->next;
  else
    while (tmp && tmp->next)
      {
	if (fmt(tmp->next->data, data))
	  tmp->next = (tmp->next ? tmp->next->next : 0);
	tmp = tmp->next;
      }
  *lst = tmp;
}
