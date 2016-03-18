#include <stdlib.h>
#include "libmy.h"

int		my_putstr(const char *s)
{
  if (s != NULL && *s != '\0')
    {
      my_putchar(*s);
      return (my_putstr(s + 1) + 1);
    }
  return (0);
}
