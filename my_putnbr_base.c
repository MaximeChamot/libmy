#include "libmy.h"

void		my_putnbr_base(int nbr, const char *base)
{
  int		tmp;

  if (nbr < 0)
    {
      my_putchar('-');
      nbr *= -1;
    }
  if (nbr > (my_strlen(base) - 1))
    my_putnbr_base(nbr / my_strlen(base), base);
  my_putchar(base[nbr % my_strlen(base)]);
}
