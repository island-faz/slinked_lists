/*
** main.c for test_lib in /home/bourhi_a/stork/xbrain/lab/slinked_lists/tests
** 
** Made by amine bourhime
** Login   <bourhi_a@epitech.net>
** 
** Started on  Mon May 12 18:01:25 2014 
** Last update Tue May 13 13:22:26 2014 
*/

#include <list.h>
#include <test.h>

int		continue_testing(t_glist *lst, t_elem elem)
{
  t_glist	*rev;

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
  rev = get_rev(lst);
  printf("Will rev list.\n");
  show_elements(rev);
  rev = get_rev(rev);
  printf("Will rev again.\n");
  show_elements(rev);
  printf("Last elem: %d\n", CAST_DATA(rev->last_elem)->id);
  return (!0x0);
}

int		main()
{
  t_glist	*lst;
  t_elem	elem;

  srand(time(0));
  elem.id = rand() % 10;
  printf("init list...\n");
  lst = init_list();
  printf("push 30 random elements in list.\n");
  put_elements(lst, 30);
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
  continue_testing(lst, elem);
  return (0x0);
}
