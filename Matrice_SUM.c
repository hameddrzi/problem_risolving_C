#include <stdio.h>
#define ROW 2
#define COL 3
int main() {
    int matrice[ROW][COL];
    int matrice2[ROW][COL];
    int i,j;
    for ( i = 0; i <2 ; ++i) {
        for (j = 0; j < 3; ++j) {
            printf("Matrice 1 address[%d][%d]: ", i+1, j+1);
            scanf("%d", &matrice[i][j]);
        }
    }
    int x,z;
    for ( x = 0; x < 2; ++x) {
        for ( z = 0; z <3 ; ++z) {
            printf("Matrice 2 address[%d][%d]: ", x+1, z+1);
            scanf("%d", &matrice2[x][z]);
        }
    }
    int s[ROW][COL];
    for (int i = 0; i < ROW; ++i) {
        for (int j = 0; j <COL ; ++j) {
            s[i][j]= matrice2[i][j] + matrice[i][j];
        }
    }
    for (int i = 0; i < ROW; ++i) {
        for (int j = 0; j < COL; ++j) {
            printf("%d ", s[i][j]);

        }
        printf("\n");
    }

}
