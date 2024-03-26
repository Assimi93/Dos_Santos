#include <stdio.h>

int main() {
    int i, b, taille;
    int tab[10] = {0,1,2,3,4,5,6,7,8,9};
    taille = sizeof(tab) / sizeof(tab[0]); // Taille du tableau
    
    printf("Nombre recherché : ");
    scanf("%d", &b);

    int debut = 0;
    int fin = taille - 1;
    int milieu;

    // Recherche binaire
    while (debut <= fin) {
        milieu = (debut + fin) / 2;

        if (tab[milieu] == b) {
            printf("Le nombre %d est dans la liste.\n", b);
            printf("Il est à la position : %d\n", milieu);
            return 0; // Quittez le programme si le nombre est trouvé
        } else if (tab[milieu] < b) {
            debut = milieu + 1;
        } else {
            fin = milieu - 1;
        }
    }

    // Si le nombre n'a pas été trouvé, afficher un message approprié
    printf("Le nombre %d n'est pas dans la liste.\n", b);

    return 0;
}
