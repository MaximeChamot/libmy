#include <stdlib.h>
#include "libmy.h"

#define	SPACE ' '
#define	TAB '\t'

static char *	find_new_word(char *s);
static int	count_words(const char *s);
static int	get_word_len(const char *s);

static char *	find_new_word(char *s)
{
  if (s != NULL && *s != '\0' && (*s == SPACE || *s == TAB))
    find_new_word(s + 1);
  else
    return (s);
}

static int	get_word_len(const char *s)
{
  if (s != NULL && *s != '\0' && *s != SPACE && *s != TAB)
    return (get_word_len(s + 1) + 1);
  else
    return (0);
}

static int	count_words(const char *s)
{
  if (s != NULL && *s != '\0')
    {
      if (*s != SPACE && *s != TAB)
      	return (count_words(s + get_word_len(s)) + 1);
      else
      	return (count_words(s + 1) + 0);
    }
  return (0);
}

char **		my_str_to_wordtab(char *s)
{
  char		**tab;
  int		nb_words;
  int		i;

  tab = NULL;
  nb_words = count_words(s);
  if ((tab = malloc(sizeof(char *) * (nb_words + 1))) != NULL)
    {
      i = 0;
      while (i < nb_words)
	{
	  s = find_new_word(s);
	  if (s != NULL && *s != '\0')
	    {
	      if ((tab[i] = my_strndup(s, get_word_len(s))) == NULL)
		break;
	    }
	  s += get_word_len(s);
	  i += 1;
	}
      tab[i] = '\0'; 
   }
  return (tab);
}
