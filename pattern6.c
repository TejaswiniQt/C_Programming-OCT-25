/*
i/p : row = 9
o/p :

1 
3 3 
5 5 5 
7 7 7 7 
9 9 9 9 9 
8 8 8 8 
6 6 6 
4 4 
2 

*/

#include <stdio.h>

int main()
{
    int row,i,j,odd=1,even=8;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    for(i=0; i<row; i++)
    {
        for(j=0; j<=(row/2); j++)
        {
            if(i <= (row/2))
            {
                if(i>=j)
                printf("%d ",odd);
            }
            else
            {
                if(j < (row-i))
                printf("%d ",even);
            }
        }
        printf("\n");
        odd = odd + 2;
        if(i>4)
        even = even - 2;
    }

    return 0;
}
