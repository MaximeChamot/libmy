#include <stdlib.h>
#include "libmy.h"

int		my_getnbr_base(char *s, char *base)
{
  int		nbr;
  int		neg;
  char		tmp[2];

  nbr = 0;
  neg = 1;
  while (s != NULL && (*s == '+' || *s == '-'))
    {
      if (*s == '-')
	neg *= -1;
      s += 1;
    }
  while (s != NULL && my_strchr(base, *s) != NULL)
    {
      nbr *= my_strlen(base);
      tmp[0] = *s;
      tmp[1] = '\0';
      nbr += my_strpos(base, tmp);
      s += 1;
    }
  return (nbr * neg);
}
