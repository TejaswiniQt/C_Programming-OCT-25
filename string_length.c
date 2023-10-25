/*
To find string length

*/

#include <stdio.h>

int str_length(char *str)
{
    int count = 0;
    while(*str)
    {
        count++;
        str++;
    }
    return count;
}

int main()
{
    char str[50];
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
   // printf("o/p: %s\n",str);
   int len = str_length(str);
   printf("String length = %d\n",len);
  return 0;
}
