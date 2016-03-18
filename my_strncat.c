#include <stdlib.h>
#include "libmy.h"

char *		my_strncat(char *dest, const char *src, int n)
{
  my_strncpy(dest + my_strlen(dest), src, n);
  return (dest);
}
