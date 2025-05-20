#include <stdio.h>

int main() {
    int height;

    printf("Quelle est la hauteur du sapin ? 🎄\n");
    scanf("%d", &height);

    for (int i = 1; i <= height; i++) {
        // Imprimer les espaces
        for (int j = 1; j <= height - i; j++) {
            printf(" ");
        }

        // Imprimer les étoiles (2*i - 1 étoiles par ligne)
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }

        // Retour à la ligne
        printf("\n");
    }

    return 0;
}
