/*
** get_rev.c for list in /home/bourhi_a/rendu/prog_elem/lem_in/src
** 
** Made by amine bourhime
** Login   <bourhi_a@epitech.net>
** 
** Started on  Sat May  3 20:25:39 2014 
** Last update Mon May 12 21:47:17 2014 
*/

#include <list.h>

t_list		*get_rev(t_list *lst)
{
  t_list	*rev;

  rev = 0;
  if (lst)
    while (lst)
      {
	/* push_front(&rev, lst->data); */
	lst = lst->next;
      }
  return (rev);
}
