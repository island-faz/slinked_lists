/*
** test.h for test list in /home/bourhi_a/stork/xbrain/lab/slinked_lists/tests
** 
** Made by amine bourhime
** Login   <bourhi_a@epitech.net>
** 
** Started on  Tue May 13 13:09:32 2014 
** Last update Tue May 13 14:15:40 2014 
*/

#ifndef		TEST_H_
#define		TEST_H_

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define CAST_DATA(x)	((t_elem*)(x->data))

typedef struct		s_elem
{
  unsigned int		id;
}			t_elem;

int		put_elements(t_glist *lst, int nb_elems);
void		show_list_content(t_glist *lst);
void		end_to_start(t_glist *lst);
int		data_cmp(void *d1, void *d2);
int		data_cmp_opp(void *d1, void *d2);

#endif		/* TEST_H_ */
