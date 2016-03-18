#include <stdlib.h>
#include "libmy.h"

char *		my_strcat(char *dest, const char *src)
{
  my_strcpy(dest + my_strlen(dest), src);
  return (dest);
}
