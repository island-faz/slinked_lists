/*
** rm_elem.c for list in /home/bourhi_a/rendu/PSU_2013_minitalk
** 
** Made by amine bourhime
** Login   <bourhi_a@epitech.net>
** 
** Started on  Thu Mar 20 20:07:10 2014 
** Last update Tue May 13 01:29:38 2014 
*/

#include <list.h>

/* void		rm_element(t_glist *lst, t_list *tmp) */
/* { */
/*   if (tmp->prev) */
/*     { */
/*       if (tmp->next) */
/* 	{ */
/* 	  tmp->prev->next = tmp->next; */
/* 	} */
/*       else */
/* 	tmp->prev->next = 0; */
/*     } */
/*   else */
/*     { */
/*       if (tmp->next) */
/* 	{ */
/* 	  tmp->next->prev = 0; */
/* 	  lst->list = tmp->next; */
/* 	} */
/*       else */
/* 	lst->list = 0; */
/*     } */
/* } */

/* int		rm_elem(t_glist *lst, void *data, int (*cmp)(void*, void*)) */
/* { */
/*   int		nb; */
/*   t_list	*tmp; */

/*   nb = 0; */
/*   tmp = lst->list; */
/*   if (!tmp) */
/*     return (0x0); */
/*   while (tmp) */
/*     { */
/*       if (!cmp(tmp->data, data)) */
/* 	rm_element(lst, tmp); */
/*       tmp = tmp->next; */
/*     } */
/*   return (nb); */
/* } */


int		rm_elem(t_glist *lst, void *data, int (*cmp)(void*, void*))
{
  int		nb;
  t_list	*tmp;

  nb = 0;
  tmp = lst->list;
  if (!tmp)
    return (0x0);
  while (tmp)
    {
      if (!cmp(tmp->data, data))
	{
	  if (tmp->prev)
	    {
	      if (tmp->next)
		{
		  tmp->prev->next = tmp->next;
		}
	      else
		tmp->prev->next = 0;
	    }
	  else
	    {
	      if (tmp->next)
		{
		  tmp->next->prev = 0;
		  lst->list = tmp->next;
		}
	      else
		lst->list = 0;
	    }
	}
      tmp = tmp->next;
    }
  return (nb);
}
