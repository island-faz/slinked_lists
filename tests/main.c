/*
** main.c for test_lib in /home/bourhi_a/stork/xbrain/lab/slinked_lists/tests
** 
** Made by amine bourhime
** Login   <bourhi_a@epitech.net>
** 
** Started on  Mon May 12 18:01:25 2014 
** Last update Tue May 13 02:08:21 2014 
*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <list.h>

/*-------------------------------------------------------*/

#define CAST_DATA(x)	((t_elem*)(x->data))

typedef struct		s_elem
{
  unsigned int		id;
}			t_elem;

/*-------------------------------------------------------*/

int		put_elements(t_glist *lst, int nb_elems)
{
  int		i;
  int		r;
  t_elem	*elem;

  i = 0;
  while (i <= nb_elems)
    {
      elem = malloc(sizeof(t_elem));
      if (!elem)
	return (0x0);
      r = rand();
      elem->id = r % 10;
      push_back(lst, elem);
      i++;
    }
  return (!0x0);
}

void		show_elements(t_glist *lst)
{
  t_list	*tmp;

  tmp = lst->list;
  while (tmp)
    {
      printf("%d ", CAST_DATA(tmp)->id);
      tmp = tmp->next;
    }
  printf("\n\n");
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


int		main()
{
  t_glist	*lst;
  t_elem	elem;


  srand(time(0));
  elem.id = rand() % 10;
  printf("init list...\n");
  lst = init_list();
  printf("push 20 elements in list.\n");
  put_elements(lst, 20);
  push_front(lst, (void*)&elem);
  push_back(lst, (void*)&elem);
  show_elements(lst);
  printf("Go from end to the start:\n");
  end_to_start(lst);
  printf("list lent: %d\n", list_len(lst));
  printf("last elem: %d\n", CAST_DATA(lst->last_elem)->id);
  printf("Removing last element...\n");
  rm_last(lst);
  show_elements(lst);
  printf("Removing first element...\n");
  rm_first(lst);
  show_elements(lst);
  printf("Sorting list (Ascending)...\n");
  sort_list(lst, data_cmp);
  show_elements(lst);
  printf("Sorting list (Descendant)...\n");
  sort_list(lst, data_cmp_opp);
  show_elements(lst);
  printf("Will try to find element %d in list...\n", elem.id);
  printf("Element %d is in the list %d time.\n\n",
  	 elem.id, in_lst(lst, (void*)&elem, data_cmp));
  printf("Will remove element %d from list...\n", elem.id);
  rm_elem(lst, (void*)&elem, data_cmp);
  show_elements(lst);
  return (0x0);
}
