/*
 Write a program in C to print individual characters of a string in reverse order

*/

#include <stdio.h>

void separate_chracters(char *str)
{
    int len = 0,i;
    char *temp = str;
    while(*str)
    {
        len++;
        str++;
    }
    printf("The characters of the string are: ");
    for(i=(len-1); i>=0; i--)
    {
        printf("%c ",temp[i]);
    }
}

int main()
{
    char str[50];
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
    separate_chracters(str);
  return 0;
}
