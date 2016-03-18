#include <stdlib.h>
#include "libmy.h"

char *		my_revstr(char *s)
{
  int		len;
  char		*ptr_end;
  char		tmp;
  int		i;

  len = my_strlen(s);
  ptr_end = s + (len - 1);
  i = 0;
  while (i < (len / 2))
    {
      tmp = *s;
      *s = *ptr_end;
      *ptr_end = tmp;
      s += 1;
      ptr_end -= 1;
      ++i;
    }
  return (s);
}
