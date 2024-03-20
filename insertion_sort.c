#include <stdio.h>

// Fonction pour effectuer le tri par insertion
void triInsertion(int tableau[], int taille) {
    int i, j, cle;
    for (i = 1; i < taille; i++) {
        cle = tableau[i];
        j = i - 1;

        // Déplacer les éléments du tableau qui sont plus grands que la clé
        // vers la droite d'une position
        while (j >= 0 && tableau[j] > cle) {
            tableau[j + 1] = tableau[j];
            j = j - 1;
        }
        tableau[j + 1] = cle; // Insérer la clé à sa position correcte
    }
}

int main() {
    int taille;

    // Demander à l'utilisateur de saisir la taille du tableau
    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);

    int tableau[taille];

    // Demander à l'utilisateur de saisir les éléments du tableau
    printf("Entrez les %d éléments du tableau :\n", taille);
    for (int i = 0; i < taille; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    printf("Tableau avant le tri par insertion :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    triInsertion(tableau, taille);

    printf("Tableau après le tri par insertion :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}
