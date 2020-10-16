#include <stdio.h>

int
main ()
{
  int income,hl,tax,fincome;
  printf ("Enter your annual income: ");
  scanf ("%d",&income);
  printf ("\n Enter home loan amount: ");
  scanf ("%d",&hl);
  if(hl < 200000)
    {
      fincome=income-(hl + 50000);
    }
  else
    fincome=income-(250000);

   // fincome= income - 50000 -hl;

  if(fincome <= 250000)
    {
      printf ("No need to pay tax");
    }
  else if(fincome > 250000 && fincome <= 500000)
    {
      tax = 0.05 * fincome;
      printf ("Tax to be paid is %d\n", tax);
    }
  else if(fincome > 500000 && fincome <= 1000000)
    {
      tax = 0.2 * fincome;
      printf ("Tax to be paid is %d\n", tax);

    }
  else if(fincome>1000000)
    {
      tax = 0.3 * fincome;
      printf ("Tax to be paid is %d\n", tax);
    }

  return 0;
}
