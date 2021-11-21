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

    printf("\nA palavra digitada foi %s", word);
    printf(" e de acordo com a tabela ASCII seu valor em decimal e:\n\n");

    for(j = 0; j < i - 1; j++)
    {
        printf(" %d", letterList[j]);
    }

    printf("\n ");

    return 0;
}