#include <unistd.h>
#include "libmy.h"

int		my_putchar(const char c)
{
  return (write(1, &c, 1));
}
