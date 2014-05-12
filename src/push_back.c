/*
** put_elem.c for list in /home/bourhi_a/rendu/MUL_2013_rtv1
** 
** Made by amine bourhime
** Login   <bourhi_a@epitech.net>
** 
** Started on  Thu Mar 13 05:13:00 2014 
** Last update Mon May 12 17:56:54 2014 
*/

#include <stdlib.h>
#include <list.h>

int	      push_back(t_list **lst, void *data)
{
  t_list      *tmp;
  t_list      *tmp_l;

  tmp = malloc(sizeof(t_list));
  if (!tmp)
    return (0x0);
  tmp->data = data;
  tmp->next = 0;
  if (*lst == 0)
    *lst = tmp;
  else
    {
      tmp_l = *lst;
      while (tmp_l->next)
	tmp_l = tmp_l->next;
      tmp_l->next = tmp;
    }
  return (1);
}
