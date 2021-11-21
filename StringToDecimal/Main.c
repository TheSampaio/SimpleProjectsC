#include<stdio.h>

#define STRING "julia"

int main()
{
    int letterList[20];
    int i = 0;
    int j;

    char word[20] = STRING;

    while(word[i] != '\0')
    {
        letterList[i] = word[i];
        i++;
    }

    printf("\nThe typed word was '%s", word);
    printf("' and acording with ASCII table, the caracter's decimal values is:\n\n");

    for(j = 0; j < i; j++)
    {
        printf(" %d", letterList[j]);
    }

    printf("\n ");

    return 0;
}