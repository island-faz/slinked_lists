/*
** main.c for test_lib in /home/bourhi_a/stork/xbrain/lab/slinked_lists/tests
** 
** Made by amine bourhime
** Login   <bourhi_a@epitech.net>
** 
** Started on  Mon May 12 18:01:25 2014 
** Last update Wed May 14 16:20:59 2014 
*/

#include <list.h>
#include <test.h>

int		main()
{
  t_glist	*lst;
  t_glist	*clone;
  t_glist	*rev;
  /* t_elem	elem; */

  /* srand(time(0)); */
  /* elem.id = rand() % 10; */
  lst = init_list();
  printf("[+] Init list...\n");
  put_elements(lst, 10);
  show_list_content(lst);
  printf("[+] Sorting...\n");
  sort_list(lst, data_cmp);
  show_list_content(lst);
  printf("[+] Sorting opposite...\n");
  sort_list(lst, data_cmp_opp);
  show_list_content(lst);
  printf("[+] Will clone list...\n");
  clone = clone_list(lst);
  show_list_content(clone);
  printf("[+] Will rev list...\n");
  rev = get_rev(lst);
  show_list_content(rev);
  printf("[+] Will rm last elem from clone...\n");
  rm_last(clone);
  show_list_content(clone);
  printf("[+] Will rm first elem from clone...\n");
  rm_first(clone);
  show_list_content(clone);
  printf("[+] Will show list from end to start...\n");
  end_to_start(clone);
  return (0x0);
}
