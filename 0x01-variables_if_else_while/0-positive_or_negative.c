#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  /* your code goes there */
  if (n < 0)
    {
      printf(" %ld is positive\n", n);
    }
  else if (n == 0)
    {
      printf("%ld in zero\n", n);
    }
  else
    {
      printf("%ld s negative\n", n);
    }
  return (0);
}

