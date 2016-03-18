#include "libmy.h"

void		my_swap_str(char **a, char **b)
{
  char		*tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
}
