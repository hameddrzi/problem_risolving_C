#include <stdio.h>

int main() {
    int matrice1[2][3];
    int matrice2[3][2];
    int i,j;

    for ( i = 0; i < 2; ++i) {
        for ( j = 0; j < 3; ++j) {
            printf("Matrice 1 anddress[%d][%d]: ", i+1, j+1);
            scanf("%d", &matrice1[i][j]);
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("Matrice 2 address[%d][%d]: ", i+1, j+1);
            scanf("%d", &matrice2[i][j]);
        }
    }
    int mul[2][2]={0};
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 3; ++k) { // Somma dei prodotti scalari
                mul[i][j] += matrice1[i][k] * matrice2[k][j];
            }
        }
    }
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d ", mul[i][j]);

        }
        printf("\n");
    }
}
