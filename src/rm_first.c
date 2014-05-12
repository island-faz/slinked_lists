/*
** rm_first.c for list in /home/bourhi_a/rendu/PSU_2013_minitalk
** 
** Made by amine bourhime
** Login   <bourhi_a@epitech.net>
** 
** Started on  Sun Mar 23 05:34:59 2014 
** Last update Mon May 12 17:55:02 2014 
*/

#include <list.h>

int		rm_first(t_list **lst)
{
  if (!(*lst))
    return (0);
  if ((*lst)->next == 0)
    *lst = 0;
  else
    *lst = (*lst)->next;
  return (1);
}
