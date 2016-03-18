#include <stdlib.h>
#include "libmy.h"

int		my_getnbr(const char *s)
{
  int		nbr;
  int		neg;

  nbr = 0;
  neg = 1;
  while (s != NULL && (*s == '+' || *s == '-'))
    {
      if (*s == '-')
	neg *= -1;
      s += 1;
    }
  while (s != NULL && *s >= '0' && *s <= '9')
    {
      nbr *= 10;
      nbr += (*s - 48);
      s += 1;
    }
  return (nbr * neg);
}
