#include <stdio.h>

int main() {

    float note01 = 5.2;
    float note02 = 7.5;
    float note03 = 4.6;
    float note04 = 8.5;

    float average = (note01 + note02 + note03 + note04) / 4;

    printf("The note's average is: %.2f", average);

    if (average > 7) {
        printf("\nYou're approved");
    }

    else if (average == 7) {

        printf ("\nYou're approved, but need improve this notes");
    }

    else {
        printf ("\nYou're disapproved");
    }

    return 0;
}

