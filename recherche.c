/*-----------------------------------
            DEMBELE
            Assimi

           Recherche
            
-----------------------------------*/
#include <stdio.h>

int main() {
    int i, b;
    int tab[10] = {2, 7, 5, 9, 6, 4, 0, 1, 3, 8};

    printf("Nombre recherché : ");
    scanf("%d", &b);

    // Parcourir le tableau pour rechercher le nombre
    for (i = 0; i < 10; i++) {
        if (b == tab[i]) {
            printf("Le nombre %d est dans la liste.\n", b);
            printf("Il est à la position : %d\n", i);
            return 0; // Quittez le programme si le nombre est trouvé
        }
    }

    // Si le nombre n'a pas été trouvé, afficher un message approprié
    printf("Le nombre %d n'est pas dans la liste.\n", b);

    return 0;
}
