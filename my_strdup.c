#include <stdlib.h>
#include "libmy.h"

char *		my_strdup(const char *s)
{
  char *	new_s;

  new_s = NULL;
  if (s != NULL && (new_s = malloc(sizeof(char) * (my_strlen(s) + 1))) != NULL)
    my_strcpy(new_s, s);
  return (new_s);
}
