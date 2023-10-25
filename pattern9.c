/*
i/p : row = 9
o/p :
        0        
      -101      
    -2-1012    
  -3-2-10123  
-4-3-2-101234
  -3-2-10123  
    -2-1012    
      -101      
        0 
*/

#include <stdio.h>

int main()
{
  int row, i, j,num;
  printf ("Enter the number of rows: ");
  scanf ("%d", &row);
  for (i = 0; i < row; i++)
    {
        num = -(i);
        if(i>4)
        num = -(row-i-1);
        for(j=0; j<row; j++)
        {
            if(i <= (row/2))
            {
                if(j < ((row/2)-i) || j > ((row/2)+i))
                    printf("  ");
                else
                    printf("%d",num++);
            }
            else
            {
                if(j < (i-(row/2)) || j > ((row-(i-(row/2)))-1))
                    printf("  ");
                else
                printf("%d",num++);
            }
        }
      printf ("\n");
    }

  return 0;
}
