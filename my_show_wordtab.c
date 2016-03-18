#include <stdlib.h>
#include "libmy.h"

void		my_show_wordtab(char **tab)
{
  if (tab != NULL && *tab != '\0')
    {
      my_putstr(*tab);
      my_putchar('\n');
      my_show_wordtab(tab + 1);
    }
}
