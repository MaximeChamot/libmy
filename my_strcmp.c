#include <stdlib.h>
#include "libmy.h"

int		my_strcmp(const char *s1, const char *s2)
{
  if (s1 != NULL && s2 != NULL && *s1 != '\0' && s2 != '\0' && *s1 == *s2)
    my_strcmp(s1 + 1, s2 + 1);
  else
    return (*s1 - *s2);
}
