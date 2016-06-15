#include <stdlib.h>
#include "libmy.h"

int		my_strlen(const char *s)
{
  int		i;

  i = 0;
  while (s != NULL && s[i] != '\0')
    i++;
  return (i);
}
