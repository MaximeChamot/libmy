#include <stdlib.h>
#include "libmy.h"

void		my_sort_wordtab(char **tab)
{
  int		i;

  if (tab != NULL && *tab != '\0')
    {
      i = 1;
      while (tab[i] != '\0')
	{
  	  if (my_strcmp(tab[0], tab[i]) > 0)
	    my_swap_str(&tab[0], &tab[i]);
  	  i += 1;
	}
      my_sort_wordtab(tab + 1);
    }
}
