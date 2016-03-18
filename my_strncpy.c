#include <stdlib.h>
#include "libmy.h"

char *		my_strncpy(char *dest, const char *src, int n)
{
  if (src != NULL && *src != '\0' && n > 0)
    {
      *dest = *src;
      my_strncpy(dest + 1, src + 1, n - 1);
    }
  else
    *dest = '\0';
  return (dest);
}
