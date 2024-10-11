#include <stdio.h>
#include <stdbool.h>

#define size_a 5
int main() {
    int a[size_a];
    for (int i = 0; i < size_a; ++i) {
        printf("insert num: ");
        scanf("%d", &a[i]);
    }
    int temp;
    for (int j = 0; j <size_a-1 ; ++j) {

        for (int i = 0; i < size_a - j - 1; ++i) {
            if (a[i] > a[i + 1]) {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size_a; ++i) {
        printf("num: %d\n", a[i]);
    }
}
