/*
Write a program in C to compare two strings without using string library functions.
*/

#include <stdio.h>

int compare_strings(char *str1,char str2[])
{
    int count = 0,i=0;
    while(*str1 != '\0' || *str2 != '\0')
    {
        if(*str1 != *str2)
        {
            count = -1;
            break;
        }
        str1++;
        str2++;
    }
    return count;
}

int main()
{
    char str1[100],str2[100],count;
    printf("Enter string1: ");
    scanf("%[^\n]s",str1);
    printf("Enter string2: ");
    //scanf("\n"); 
    /*The %[\n] directive tells scanf() to match newline characters, and the * flag signals that no assignment should be 
    made, so %*[\n] skips over any leading newline characters
    (assuming there is at least one leading \n character: more on this in a moment). 
    There is a space following this first directive, so zero or more whitespace characters are skipped before the 
    final %[^\n] directive, which matches characters until a newline is encountered. 
    These are stored in input_string[], and the newline character is left behind in the input stream. 
    Subsequent calls using this format string will skip over this remaining newline character.
    there is probably no need for the %*[\n] directive here, since \n is a whitespace character;
    almost the same thing could be accomplished with a leading space in the format string: " %[^\n]".
    One difference between the two: "%*[\n] %[^\n]" expects there to be a newline at the beginning of the input, 
    and without this the match fails and scanf() returns without making any assignments, 
    while " %[^\n]" does not expect a leading newline, or even a leading whitespace character (but skips them if present).
    If you used "%[^\n]" instead, as suggested in the body of the question (note that the trailing s is not a part of the 
    scanset directive), the first call to scanf() would match characters until a newline is encountered. 
    The matching characters would be stored in input_string[], and the newline would remain in the input stream. 
    Then, if scanf() is called again with this format string, no characters would be matched before encountering the 
    newline, so the match would fail without assignment.*/
    scanf("\n%[^\n]s",str2);
    count = compare_strings(str1,str2);
    if(count == 0)
    printf("Strings are equal\n");
    else
    printf("Strings are not equal\n");
   /* printf("%s",str1);
    printf("%d",10);*/
  return 0;
}
