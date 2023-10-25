/*
i/p : row = 6
o/p :

1 
* * 
2 2 2 
* * * * 
3 3 3 3 3 
* * * * * *    

*/

#include <stdio.h>

int
main ()
{
  int row, i, j,num=1;
  printf ("Enter the number of rows: ");
  scanf ("%d", &row);
  for (i = 1; i <= row; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(i % 2 != 0)
            printf("%d ",num);
            else
            printf("* ");
        }
      printf ("\n");
      if(i%2 != 0)
      num = num + 1;
    }

  return 0;
}
