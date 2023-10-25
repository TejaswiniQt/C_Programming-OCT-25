/*
Write a program in C to count the total number of words in a string.
*/

#include <stdio.h>

int count_words(char *str)
{
    int count = 1,i;
    char *temp = str;
    while(*str)
    {
        if(*str == ' ')
        count++;
        str++;
    }
    return count;
}

int main()
{
    char str[100],count;
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
    count = count_words(str);
    printf("Total number of words in string : %d\n",count);
  return 0;
}
