/*
** misc.c for list test in /home/bourhi_a/stork/xbrain/lab/slinked_lists/tests
** 
** Made by amine bourhime
** Login   <bourhi_a@epitech.net>
** 
** Started on  Tue May 13 02:57:08 2014 
** Last update Tue May 13 14:53:19 2014 
*/

#include <list.h>
#include <test.h>

int		put_elements(t_glist *lst, int nb_elems)
{
  int		i;
  int		r;
  t_elem	*elem;

  i = 0;
  while (i < nb_elems)
    {
      elem = malloc(sizeof(t_elem));
      if (!elem)
	return (0x0);
      r = rand();
      elem->id = r % 10;
      /* elem->id = i; */
      push_back(lst, elem);
      i++;
    }
  return (!0x0);
}

void		show_list_content(t_glist *lst)
{
  t_list	*tmp;

  tmp = lst->list;
  printf("-----------------------------------------------------------------\n");
  printf("List len: %d\n", list_len(lst));
  printf("Last elm: %d\n", CAST_DATA(lst->last_elem)->id);
  while (tmp)
    {
      printf("%d ", CAST_DATA(tmp)->id);
      tmp = tmp->next;
    }
  printf("\n");
  printf("-----------------------------------------------------------------\n");
  printf("\n");
}

void		end_to_start(t_glist *lst)
{
  t_list	*tmp;

  tmp = lst->last_elem;
  while (tmp)
    {
      printf("%d ", CAST_DATA(tmp)->id);
      tmp = tmp->prev;
    }
  printf("\n\n");
}

int		data_cmp(void *d1, void *d2)
{
  t_elem	*e1;
  t_elem	*e2;

  e1 = (t_elem*)d1;
  e2 = (t_elem*)d2;
  if (e1->id > e2->id)
    return (-1);
  else if (e1->id < e2->id)
    return (1);
  return (0);
}

int		data_cmp_opp(void *d1, void *d2)
{
  t_elem	*e1;
  t_elem	*e2;

  e1 = (t_elem*)d1;
  e2 = (t_elem*)d2;
  if (e1->id > e2->id)
    return (1);
  else if (e1->id < e2->id)
    return (-1);
  return (0);
}
