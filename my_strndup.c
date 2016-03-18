#include <stdlib.h>
#include "libmy.h"

char *		my_strndup(const char *s, int n)
{
  char *	new_s;

  new_s = NULL;
  if (s != NULL && (new_s = malloc(sizeof(char) * (n + 1))) != NULL)
    my_strncpy(new_s, s, n);
  return (new_s);
}
