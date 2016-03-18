#include <stdlib.h>
#include "libmy.h"

char *		my_strstr(char *s, const char *to_find)
{
  if (s != NULL && to_find != NULL && *s != '\0' && my_strncmp(s, to_find, my_strlen(to_find)) == 0)
    return (s);
  if (s != NULL && to_find != NULL && *s != '\0')
    return (my_strstr(s + 1, to_find));
  else
    return (NULL);
}
