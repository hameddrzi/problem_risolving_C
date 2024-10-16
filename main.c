#include <stdio.h>

int main() {
    int matrice[3][3];
    int i, j;
    for ( i = 0; i < 3; ++i) {
        for ( j = 0; j < 3; ++j) {
            printf("inseri you number of matrice[%d][%d]: ", i+1, j+1);
            scanf("%d", &matrice[i][j]);
        }
    }
    printf("your matrice is:\n ");
    for ( i = 0; i < 3; ++i) {
        for ( j = 0; j < 3; ++j) {
            printf("%d ", matrice[j][j]);
        }
        printf("\n");
    }
}
