#include <stdlib.h>
#include "libmy.h"

char *		my_strcpy(char *dest, const char *src)
{
  if (src != NULL && *src != '\0')
    {
      *dest = *src;
      my_strcpy(dest + 1, src + 1);
    }
  else
    *dest = '\0';
  return (dest);
}
