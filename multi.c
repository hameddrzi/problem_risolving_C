#include <stdio.h>
#include <math.h>

int main() {
    int row, cols, row2, cols2 ;
    printf("insert Rows of Matrice1: ");
    scanf("%d", &row);
    printf("insert Cols of Matrice1: ");
    scanf("%d", &cols);


    printf("now insert row of matrice2: ");
    scanf("%d", &row2);
    printf("insert Cols of Matrice2: ");
    scanf("%d", &cols2);



    if(cols == row2) {
        int matrice1[row][cols];
        int matrice2[row2][cols2];
        int multi[row][cols2];


        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < cols2; ++j) {
                multi[i][j] = 0;
            }
        }

        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < cols; ++j) {
                printf("insert 1 Matrice[%d][%d]: ", i + 1, j + 1);
                scanf("%d", &matrice1[i][j]);
            }
        }
        for (int i = 0; i < row2; ++i) {
            for (int j = 0; j < cols2; ++j) {
                printf("insert 2 Matrice[%d][%d]: ", i + 1, j + 1);
                scanf("%d", &matrice2[i][j]);
            }
        }


        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < cols2; ++j) {
                for (int k = 0; k < cols; ++k) {
                    multi[i][j] += matrice1[i][k] * matrice2[k][j];
                }
            }
        }
        printf("risult of moltiplicazione\n");
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < cols2; ++j) {
                printf("%d ", multi[i][j]);
            }
            printf("\n");
        }

    }else{
        printf("Not multiplicable ");
    }
}
