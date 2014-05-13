/*
** list_len.c for list in /home/bourhi_a/rendu/PSU_2013_minitalk/lib/lst_stuff
** 
** Made by amine bourhime
** Login   <bourhi_a@epitech.net>
** 
** Started on  Fri Mar 21 08:32:01 2014 
** Last update Mon May 12 21:49:41 2014 
*/

#include <list.h>

int		list_len(t_glist *glst)
{
  int		i;
  t_list	*lst;

  lst = glst->list;
  i = 0;
  while (lst && (lst = lst->next))
    i++;
  return (i);
}
