/*
** rm_last.c for list in /home/bourhi_a/rendu/prog_elem/lem_in/src
** 
** Made by amine bourhime
** Login   <bourhi_a@epitech.net>
** 
** Started on  Sat May  3 06:10:16 2014 
** Last update Mon May 12 17:55:13 2014 
*/

#include <list.h>

int		rm_last(t_list **lst)
{
  t_list	*tmp;
  int		lst_len;

  if (!(*lst))
    return (0);
  tmp = *(lst);
  lst_len = list_len(tmp);
  if (lst_len == 1)
    *lst = 0;
  else if (lst_len == 2)
    (*lst)->next = 0;
  else if (lst_len >= 3)
    {
      while (tmp->next->next)
	tmp = tmp->next;
      tmp->next = 0;
    }
  return (1);
}
