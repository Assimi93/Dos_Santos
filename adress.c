/*-----------------------------------
            DEMBELE
            Assimi

           afficher adresse
            
-----------------------------------*/
#include <stdio.h>

int main() {
    int variable; // Declaring the variable

    variable = 42; // Assigning value to the variable

    printf("Value of the variable: %d\n", variable); // Printing the value
    printf("Memory address of the variable: %p\n", (void*)&variable); // Printing the memory address

    return 0;
}
