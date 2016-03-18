#include <stdlib.h>
#include "libmy.h"

char *		my_strlowcase(char *s)
{
  if (s != NULL && *s != '\0')
    {
      if (*s >= 'A' && *s <= 'Z')
	*s += 32;
      my_strlowcase(s + 1);
    }
  return (s);
}
