/*
** Made by Flavian Feugueur <flavian.feugueur@epitech.eu>
*/

#include <stdio.h>

/*
** faster than the lib math's pow 
*/

size_t  my_pow(size_t nb, size_t pow)
{
  int   tmp = nb;
  int   i = 1;

  while (i < pow) {
    nb = nb * tmp;
    i++;
  }
  return (nb);
}

int             main(void)
{
  size_t        n = 0;
  size_t        low_limit;
  size_t        max_limit;
  size_t        start = 1;
  size_t        i = 0;

  scanf("%ld", &n);
  low_limit = my_pow(10, n - 1);
  max_limit = my_pow(10, n);
  while (i < low_limit)
    i = my_pow(start++, n);
  printf("%ld\n", i);
  while ((i = my_pow(start++, n)) < max_limit)
    printf("%ld\n", i);
  return (0);
}
