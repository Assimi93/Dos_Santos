#include "fonctions.h"

// Implémentation de la fonction somme
int somme(int a, int b) {
    return a + b;
}

// Implémentation de la fonction comparaison
int comparaison(int a, int b) {
    if (a > b) {
        return 1;
    } else if (a < b) {
        return -1;
    } else {
        return 0;
    }
}

// Implémentation de la fonction multiplication
int multiplication(int a, int b) {
    return a * b;
}
