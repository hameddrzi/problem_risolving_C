#include <stdio.h>

int main() {
    int row, cols, row2, cols2 ;
    printf("insert Rows of Matrice1: \n");
    scanf("%d", &row);
    printf("insert Cols of Matrice1: \n");
    scanf("%d", &cols);
    printf("now insert row of matrice2: \n");
    scanf("%d", &row2);
    printf("insert Cols of Matrice2: \n");
    scanf("%d", &cols2);


    int matrice1[row][cols];
    int matrice2[row2][cols2];
    int i,j;
        if(cols == row2) {
            for (i = 0; i < row; ++i) {
                for (j = 0; j < cols; ++j) {
                    printf("insert 1 Matrice[%d][%d]: \n", i + 1, j + 1);
                    scanf("%d", &matrice1[i][j]);
                }
            }
            for (i = 0; i < row2; ++i) {
                for (int j = 0; j < cols2; ++j) {
                    printf("insert 2 Matrice[%d][%d]: \n", i + 1, j + 1);
                    scanf("%d", &matrice2[i][j]);
                }
            }

            for (i = 0; i < row; ++i) {
                for (int j = 0; j < row; ++j) {
                    for (int k = 0; k <; ++k) {

                    }

                }
            }
        }
}
