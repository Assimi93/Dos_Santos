#include <stdio.h>
#include "fonctions.h"

int main() {
    int a, b;

    // Demander à l'utilisateur d'entrer les deux nombres
    printf("Entrez le premier nombre : ");
    scanf("%d", &a);

    printf("Entrez le deuxième nombre : ");
    scanf("%d", &b);

    printf("Somme : %d\n", somme(a, b));
    printf("Comparaison : %d\n", comparaison(a, b));
    printf("Multiplication : %d\n", multiplication(a, b));

    return 0;
}
