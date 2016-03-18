#include <stdlib.h>
#include "libmy.h"

int		my_strncmp(const char *s1, const char *s2, int n)
{
  if (s1 != NULL && s2 != NULL && *s1 != '\0' && s2 != '\0' && *s1 == *s2 && n > 1)
    my_strncmp(s1 + 1, s2 + 1, n - 1);
  else
    return (*s1 - *s2);
}
