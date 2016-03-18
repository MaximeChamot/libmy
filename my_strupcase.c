#include <stdlib.h>
#include "libmy.h"

char *		my_strupcase(char *s)
{
  if (s != NULL && *s != '\0')
    {
      if (*s >= 'a' && *s <= 'z')
	*s -= 32;
      my_strupcase(s + 1);
    }
  return (s);
}
