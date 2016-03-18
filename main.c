#include <stdio.h>
#include <string.h>
#include "libmy.h"

int		main(int ac, char **av, char **ae)
{
  printf("--- my_putchar ---\n");
  my_putchar('a');
  printf("\n");
  my_putchar('A');
  printf("\n");
  my_putchar('9');
  printf("\n\n");

  printf("--- my_putstr ---\n\n");
  my_putstr("toto : toto");
  printf("\n");
  my_putstr("None : ");
  my_putstr("");
  printf("\n");
  my_putstr("NULL : ");
  my_putstr(NULL);
  printf("\n\n");

  printf("--- my_strlen ---\n\n");
  printf("4 : %d\n", my_strlen("toto"));
  printf("0 : %d\n", my_strlen(""));
  printf("0 : %d\n", my_strlen(NULL));
  printf("\n\n");

  printf("--- my_putnbr ---\n\n");
  my_putstr("123456 : ");
  my_putnbr(123456);
  my_putstr("\n");
  my_putstr("-789456 : ");
  my_putnbr(-789456);
  my_putstr("\n");
  my_putstr("0 : ");
  my_putnbr(0);
  printf("\n\n");  

  printf("--- my_getnbr ---\n");
  printf("123456 : %d\n", my_getnbr("+++----123456"));
  printf("-789456 : %d\n", my_getnbr("+---789456"));
  printf("0 : %d\n", my_getnbr("0"));
  printf("12 : %d\n", my_getnbr("12"));
  printf("\n\n");  

  printf("--- my_swap_int ---\n");
  int a = 1;
  int b = 2;
  printf("a : %d | b : %d\n", a, b);
  my_swap_int(&a, &b);
  printf("a : %d | b : %d\n", a, b);
  printf("\n\n");  

  printf("--- my_strcpy ---\n");
  char dest[5];
  char src[5] = "toto";
  src[4] = '\0';
  printf("%s\n", my_strcpy(dest, src));
  printf("dest |%s| | src |%s|\n", dest, src);
  printf("\n\n");

  printf("--- my_strncpy ---\n");
  char dest1[5];
  char src1[5] = "tito";
  src1[4] = '\0';
  printf("%s\n", my_strncpy(dest1, src1, 54));
  printf("dest |%s| | src |%s|\n", dest1, src1);
  printf("\n\n");    
  
  printf("--- my_revstr ---\n");
  char azerty[7] = "azerty";
  azerty[6] = '\0';
  printf("%s\n", my_revstr(azerty));
  printf("ytreza : %s\n", azerty);
  printf("\n\n");


  printf("--- my_strcmp ---\n");
  printf("strcmp : %d | my_strcmp : %d\n", strcmp("tota", "totb"), my_strcmp("tota", "totb"));
  printf("strcmp : %d | my_strcmp : %d\n", strcmp("tote", "tota"), my_strcmp("tote", "tota"));
  printf("strcmp : %d | my_strcmp : %d\n", strcmp("", ""), my_strcmp("", ""));
  printf("\n\n");


  printf("--- my_strncmp ---\n");
  printf("strncmp : %d | my_strncmp : %d\n", strncmp("tota", "totb", 4), my_strncmp("tota", "totb", 4));
  printf("strncmp : %d | my_strncmp : %d\n", strncmp("tote", "tota", 10), my_strncmp("tote", "tota", 10));
  printf("strncmp : %d | my_strncmp : %d\n", strncmp("", "", 10), my_strncmp("", "", 10));
  printf("\n\n");


  printf("--- my_strstr ---\n");

  my_putstr("strstr : ");
  my_putstr(strstr("totatutroutra", "trou"));
  my_putstr(" | my_strstr : ");
  my_putstr(my_strstr("totatutroutra", "trou"));
  my_putchar('\n');
  my_putchar('\n');

  my_putstr("strstr : ");
  my_putstr(strstr("totatutroutra", "troua"));
  my_putstr(" | my_strstr : ");
  my_putstr(my_strstr("totatutroutra", "troua"));
  my_putchar('\n');

  printf("--- my_strchr ---\n");
  char stmp[20] = "azerty";
  printf("erty : %s\n", my_strchr(stmp, 'e'));
  printf("|| : |%s|\n", my_strchr(stmp, 'p'));
  printf("|| : |%s|\n", my_strchr(NULL, 'p'));
  printf("\n\n");

  printf("--- my_strncmp ---\n");
  printf("strncmp : %d | my_strncmp : %d\n", strncmp("tota", "totb", 4), my_strncmp("tota", "totb", 4));
  printf("strncmp : %d | my_strncmp : %d\n", strncmp("tote", "tota", 10), my_strncmp("tote", "tota", 10));
  printf("strncmp : %d | my_strncmp : %d\n", strncmp("", "", 10), my_strncmp("", "", 10));
  printf("\n\n");

  printf("--- my_strdup ---\n");
  printf("%s\n", my_strdup("toto"));
  printf("data |%s|", my_strdup(""));
  printf("\n");
  printf("%s", my_strdup(NULL));
  printf("\n");
  printf("\n\n");

  printf("--- my_strdup ---\n");
  printf("%s\n", my_strndup("toto", 3));
  printf("%s", my_strndup("", 10));
  printf("\n");
  printf("%s", my_strndup(NULL, 10));
  printf("\n");
  printf("\n\n");


  printf("--- my_strcat ---\n");
  char tab[20] = "toto";
  char tab1[20] = " va manger";
  printf("%s\n", my_strcat(tab, tab1));
  printf("\n\n");


  printf("--- my_strncat ---\n");
  char tab2[20] = "toto";
  char tab3[20] = " va manger";
  printf("%s\n", my_strncat(tab2, tab3, 6));  
  printf("\n\n");


  printf("--- my_str_isalpha ---\n");
  printf("1 : %d\n", my_str_isalpha("azertyuiopqsdfghjklmwcvbnAZERTYUIOPQSDFGHJKLMWXCVBN"));  
  printf("0 : %d\n", my_str_isalpha("azertyuiopqsdfghjklmwcvbnAZERT20YUIOPQSDFGHJKLMWXCVBN"));  
  printf("0 : %d\n", my_str_isalpha("azertyuiopqsdfghjklmwcvbnAZERTY!UIOPQSDFGHJKLMWXCVBN"));  
  printf("0 (\"\") : %d\n", my_str_isalpha(""));  
  printf("0 (NULL) : %d\n", my_str_isalpha(NULL));  
  printf("\n\n");


  printf("--- my_str_isnum ---\n");
  printf("0 : %d\n", my_str_isnum("azertyuiopqsdfghjklmwcvbnAZERTYUIOPQSDFGHJKLMWXCVBN"));  
  printf("1 : %d\n", my_str_isnum("0123456789"));  
  printf("0 : %d\n", my_str_isnum("0123456789a"));  
  printf("0 (\"\") : %d\n", my_str_isnum(""));  
  printf("0 (NULL) : %d\n", my_str_isnum(NULL));  
  printf("\n\n");


  printf("--- my_str_islower ---\n");
  printf("0 : %d\n", my_str_islower("azertyuiopqsdfghjklmwcvbnAZERTYUIOPQSDFGHJKLMWXCVBN"));
  printf("1 : %d\n", my_str_islower("azertyuiopqsdfghjklmwcvbn"));
  printf("0 : %d\n", my_str_islower("azertyuiopqsdfghjklmwcvbn "));  
  printf("0 (\"\") : %d\n", my_str_islower(""));  
  printf("0 (NULL) : %d\n", my_str_islower(NULL));  
  printf("\n\n");


  printf("--- my_str_isupper ---\n");
  printf("0 : %d\n", my_str_isupper("AZERTYUIOPQSDFGHJKLMWXCVBN123"));
  printf("1 : %d\n", my_str_isupper("AZERTYUIOPQSDFGHJKLMWXCVBN"));
  printf("0 : %d\n", my_str_isupper("AZERTYUIOPQSDFGHJKLMWXCVBN "));  
  printf("0 (\"\") : %d\n", my_str_isupper(""));  
  printf("0 (NULL) : %d\n", my_str_isupper(NULL));  
  printf("\n\n");


  printf("--- my_str_isprintable ---\n");
  printf("1 : %d\n", my_str_isprintable("AZERTYUIOPQSDFGHJKLMWXCVBN    123456789*/+-"));
  printf("0 (\"\") : %d\n", my_str_isprintable(""));  
  printf("0 (NULL) : %d\n", my_str_isprintable(NULL));  
  printf("\n\n");


  printf("--- my_strupcase ---\n");
  char chaine1[20] = "azerty";
    printf("AZERTY : %s\n", my_strupcase(chaine1));  
  printf("0 (\"\") : %s\n", my_strupcase(""));  
  printf("0 (NULL) : %s\n", my_strupcase(NULL));  
  printf("\n\n");


  printf("--- my_strlowcase ---\n");
  char chaine2[20] = "AZERTY";
  printf("azerty : %s\n", my_strlowcase(chaine2));  
  printf("0 (\"\") : %s\n", my_strlowcase(""));  
  printf("0 (NULL) : %s\n", my_strlowcase(NULL));  
  printf("\n\n");


  printf("--- my_putnbr_base ---\n\n");
  my_putstr("255  : ");
  my_putnbr_base(255, "0123456789");
  my_putstr("\n");
  my_putstr("1111 : ");
  my_putnbr_base(15, "01");
  my_putstr("\n");
  my_putstr("FF   : ");
  my_putnbr_base(255, "0123456789ABCDEF");
  my_putstr("\n");
  my_putstr("10100: ");
  my_putnbr_base(20, "01");
  printf("\n\n");  


  printf("--- my_getnbr_base ---\n\n");
  printf("255 : %d\n", my_getnbr_base("FF", "0123456789ABCDEF"));
  printf("254 : %d\n", my_getnbr_base("11111110", "01"));
  printf("255 : %d\n", my_getnbr_base("255", "0123456789"));
  printf("\n\n");    


  printf("--- my_sort_int_tab ---\n");
  int tabint[5] = {5,4,30,2,1};
  my_sort_int_tab(tabint, 5);
  my_show_int_tab(tabint, 5);
  printf("\n\n");


  printf("--- my_sort_wordtab ---\n");
  char *tabchar[] = {"tete", "toto", "titi", "tata", 0};
  my_sort_wordtab(tabchar);
  my_show_wordtab(tabchar);
  printf("\n\n");


  printf("--- my_str_to_wordtab ---\n");
  char *string = my_strdup("U		une		  chaine  de caractere			~		");
  char **str_wordtab = my_str_to_wordtab(string);
  my_show_wordtab(str_wordtab);
  my_free_wordtab(str_wordtab);
  printf("\n\n");

  

  return (0);
}
