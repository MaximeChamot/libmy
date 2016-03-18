#include <stdlib.h>
#include "libmy.h"

int		my_str_isnum(const char *s)
{
  int		i;

  i = 0;
  while (s != NULL && s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
    i += 1;
  if (s != NULL && s[i] == '\0' && i > 0)
    return (1);
  else
    return (0);
}
