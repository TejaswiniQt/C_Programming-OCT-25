/*
i/p : row = 9
o/p :
        *         
      * * *       
    * * * * *     
  * * * * * * *   
* * * * * * * * * 
  * * * * * * *   
    * * * * *     
      * * *       
        *      
*/

#include <stdio.h>

int main()
{
  int row, i, j;
  printf ("Enter the number of rows: ");
  scanf ("%d", &row);
  for (i = 0; i < row; i++)
    {
        for(j=0; j<row; j++)
        {
            if(i <= (row/2))
            {
                if(j < ((row/2)-i) || j > ((row/2)+i))
                    printf("  ");
                else
                    printf("* ");
            }
            else
            {
                if(j < (i-(row/2)) || j > ((row-(i-(row/2)))-1))
                    printf("  ");
                else
                printf("* ");
            }
        }
      printf ("\n");
    }

  return 0;
}
