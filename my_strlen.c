#include <stdlib.h>
#include "libmy.h"

int		my_strlen(const char *s)
{
  if (s != NULL && *s != '\0')
    return (my_strlen(s + 1) + 1);
  return (0);
}
