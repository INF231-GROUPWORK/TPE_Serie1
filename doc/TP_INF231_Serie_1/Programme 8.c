#include <stdio.h>

int main() {
    int v1[3], v2[3], resultat[3];
    int i;

    printf("Entrez les 3 composantes du vecteur 1 : ");
    for (i = 0; i < 3; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Entrez les 3 composantes du vecteur 2 : ");
    for (i = 0; i < 3; i++) {
        scanf("%d", &v2[i]);
    }

    resultat[0] = v1[1] * v2[2] - v1[2] * v2[1];
    resultat[1] = v1[2] * v2[0] - v1[0] * v2[2];
    resultat[2] = v1[0] * v2[1] - v1[1] * v2[0];

    printf("Produit vectoriel : (%d, %d, %d)\n", resultat[0], resultat[1], resultat[2]);

    return 0;
}