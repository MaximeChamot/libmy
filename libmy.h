#ifndef LIBMY_H_
# define LIBMY_H_

int		my_putchar(const char c);
int		my_putstr(const char *s);
void		my_putnbr(int nbr);
void		my_putnbr_base(int nbr, const char *base);
int		my_getnbr(const char *s);
int		my_getnbr_base(char *s, char *base);
int		my_strlen(const char *s);
void		my_swap_int(int *a, int *b);
void		my_swap_str(char **a, char **b);
char		*my_strcpy(char *dest, const char *src);
char		*my_strncpy(char *dest, const char *src, int n);
char		*my_revstr(char *s);
int		my_strcmp(const char *s1, const char *s2);
int		my_strncmp(const char *s1, const char *s2, int n);
char		*my_strstr(char *s, const char *to_find);
int		my_strpos(char *s, const char *to_find);
char		*my_strchr(char *s, int c);
char		*my_strdup(const char *s);
char		*my_strndup(const char *s, int n);
char		*my_strcat(char *dest, const char *src);
char		*my_strncat(char *dest, const char *src, int n);
int		my_str_isalpha(const char *s);
int		my_str_isnum(const char *s);
int		my_str_islower(const char *s);
int		my_str_isupper(const char *s);
int		my_str_isprintable(const char *s);
char		*my_strcapitalize(char *s);
char		*my_strupcase(char *s);
char		*my_strlowcase(char *s);
void		my_sort_int_tab(int *tab, int size);
void		my_show_int_tab(const int *tab, int size);
void		my_sort_wordtab(char **tab);
void		my_show_wordtab(char **tab);
char		**my_str_to_wordtab(char *s);
void		my_free_wordtab(char **tab);

#endif // LIBMY_H_
