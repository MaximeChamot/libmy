#include "libmy.h"

void		my_show_int_tab(const int *tab, int size)
{
  if (size > 0)
    {
      my_putnbr(*tab);
      my_putchar('\n');
      my_show_int_tab(tab + 1, size - 1);
    }
}
