#include <stdlib.h>
#include "libmy.h"

char *		my_strchr(char *s, int c)
{
  if (s != NULL && *s != '\0' && *s != c)
    my_strchr(s + 1, c);
  else
    {
      if (s != NULL && *s != '\0')
	return (s);
      else
	return (NULL);
    }
}
