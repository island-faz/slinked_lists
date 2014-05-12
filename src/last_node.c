/*
** last_elem.c for list in /home/bourhi_a/rendu/MUL_2013_rtv1
** 
** Made by amine bourhime
** Login   <bourhi_a@epitech.net>
** 
** Started on  Thu Mar 13 18:23:38 2014 
** Last update Mon May 12 17:54:01 2014 
*/

#include <list.h>

t_list		*last_node(t_list *lst)
{
  if (!lst)
    return (0x0);
  while (lst->next)
    lst = lst->next;
  return (lst);
}
