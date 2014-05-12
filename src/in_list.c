/*
** in_list.c for list in /home/bourhi_a/rendu/PSU_2013_minitalk
** 
** Made by amine bourhime
** Login   <bourhi_a@epitech.net>
** 
** Started on  Thu Mar 20 18:46:08 2014 
** Last update Mon May 12 17:53:53 2014 
*/

#include <list.h>

int	in_lst(t_list *lst, void *data, int (*cmp)(void*, void*))
{
  int	flag;

  if (!lst)
    return (0);
  while (lst)
    {
      flag = cmp(lst->data, data);
      if (flag)
	return (flag);
      lst = lst->next;
    }
  return (0x0);
}
