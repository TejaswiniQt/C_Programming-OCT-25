/*
i/p : row = 10
o/p :
        * 
        * * 
        * * * 
        * * * * 
        * * * * * 
* * * * * 
  * * * * 
    * * * 
      * * 
        * 
*/

#include <stdio.h>

int main()
{
  int row, i, j, space, star;
  printf ("Enter the number of rows: ");
  scanf ("%d", &row);
  for (i = 0; i < row; i++)
    {
      star = i + 1;
      space = i - (row / 2);
      for (j = 0; j < (row - 1); j++)
	{
	  if (i < (row / 2))
	    {
	      if (j < ((row / 2) - 1))
		  printf ("  ");
	      else
	      {
		    if (star > 0)
		    {
		      printf ("* ");
		      star--;
		    }
		  }
	    }
	  else
	    {
	      if (j < (row / 2))
		  {
		    if (space > 0)
		    {
		      printf ("  ");
		      space--;
		    }
		  else
		    printf ("* ");
		  }
	    }
	}
      printf ("\n");
    }

  return 0;
}
