/*
** list_len.c for list in /home/bourhi_a/rendu/PSU_2013_minitalk/lib/lst_stuff
** 
** Made by amine bourhime
** Login   <bourhi_a@epitech.net>
** 
** Started on  Fri Mar 21 08:32:01 2014 
** Last update Mon May 12 17:54:51 2014 
*/

#include <list.h>

int	list_len(t_list *lst)
{
  int	i;

  i = 0;
  while (lst && (lst = lst->next))
    i++;
  return (i);
}
