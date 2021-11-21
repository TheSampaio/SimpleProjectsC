#include <stdio.h>

int main()
{   
    int intNumber;
    float floatNumber;
    char stringWord[10];
   
    printf("\nEnter an integer: "); // Print messages
    scanf("%d", &intNumber);        // Reads and stores integer input

    printf("Enter a float: "); // Print messages
    scanf("%f", &floatNumber); // Reads and stores float input

    printf("Enter a string: "); // Print messages
    scanf("%s", stringWord);    // Reads and stores string input

    // --- Displaying all variable's values ----------
    printf("\nThe typed integer: %d",  intNumber); // Displays integer output
    printf("\n");

    printf("The typed float: %.2f",  floatNumber); // Displays float output
    printf("\n");

    printf("The typed string: %s",  stringWord); // Displays string output
    printf("\n\n");
    
    return 0;
}