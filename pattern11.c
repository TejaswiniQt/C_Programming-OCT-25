/*
i/p : row = 5
o/p :
        A 
      b b 
    C C C 
  d d d d 
E E E E E 

*/

#include <stdio.h>

int main()
{
  int row, i, j,od_ch=63,ev_ch=96;
  printf ("Enter the number of rows: ");
  scanf ("%d", &row);
  for (i=1; i<=row; i++)
    {
        if(i%2 == 0)
        ev_ch = ev_ch + 2;
        else
        od_ch = od_ch + 2;
        for(j=1; j<=row; j++)
        {
            if(j <= (row-i))
            printf("  ");
            else
            {
                if(i%2 != 0)
                printf("%c ",od_ch);
                else
                printf("%c ",ev_ch);
            }
        }
        printf("\n");
    }

  return 0;
}
