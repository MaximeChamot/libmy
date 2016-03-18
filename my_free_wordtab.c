#include <stdlib.h>
#include "libmy.h"

void		my_free_wordtab(char **tab)
{
  while (tab != NULL && *tab != '\0')
    {
      free(*tab);
      tab += 1;
    }
}
