/*
Write a program in C to separate individual characters from a string.
*/

#include <stdio.h>

void separate_chracters(char *str)
{
    printf("the characters of the string are: ");
    while(*str)
    {
        printf("%c ",*str);
        str++;
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
