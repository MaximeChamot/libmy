#include <stdlib.h>
#include "libmy.h"

int		my_strpos(char *s, const char *to_find)
{
  int		i;

  i = 0;
  while (s != NULL && to_find != NULL && s[i] != '\0' && my_strncmp(&s[i], to_find, my_strlen(to_find)) != 0)
    i += 1;
  if (s != NULL && to_find != NULL && *s != '\0')
    return (i);
  else
    return (0);
}
