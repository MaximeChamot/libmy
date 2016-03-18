#include "libmy.h"

void		my_swap_int(int *a, int *b)
{
  int		tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
}
