/*-----------------------------------
            DEMBELE
            Assimi

            comparateur
            
-----------------------------------*/
#include <stdio.h>

int main() {
    int x, y;

    printf("Entrez la valeur de x : ");
    scanf("%d", &x);

    printf("Entrez la valeur de y : ");
    scanf("%d", &y);

    if (x < y) {
        printf("Le plus grand est : %d\n", y);
    } else {
        printf("Le plus grand est : %d\n", x);
    }

    return 0;
}
