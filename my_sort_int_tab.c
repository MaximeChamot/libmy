#include "libmy.h"

void		my_sort_int_tab(int *tab, int size)
{
  int		i;

  if (size > 0)
    {
      i = 1;
      while (i < size)
	{
  	  if (tab[0] > tab[i])
  	    my_swap_int(&tab[0], &tab[i]);
	  i += 1;
	}
      my_sort_int_tab(tab + 1, size - 1);
    }
}
