/*
Write a program in C to count the total number of alphabets, digits and special characters in a string.
*/

#include <stdio.h>

void count_alphabets_digits_spc_ch(char *str,int *alphabets,int *digits,int *spc_ch)
{
    while(*str)
    {
        if(*str >= 65 && *str <= 90 || *str >= 97 && *str <= 122)
        (*alphabets)++;
        else if(*str >= 48 && *str <= 57)
        (*digits)++;
        else
        (*spc_ch)++;
        str++;
    }
}

int main()
{
    char str[100];
    int alphabets=0,digits=0,spc_ch=0;
    printf("Enter string: ");
    scanf("%[^\n]s",str);
    count_alphabets_digits_spc_ch(str,&alphabets,&digits,&spc_ch);
    printf("number of alphabets: %d\n",alphabets);
    printf("Number of digits: %d\n",digits);
    printf("Number of special characters: %d\n",spc_ch);
  return 0;
}
