#include <stdio.h>
#include <stdbool.h>


bool leg_sequenze(int *somma ,int *somma_sq, int *max ){
    int count = 0, n;
    *somma = *somma_sq = *max = 0;



}

int main(){
    int somma, somma_sq, max;

    while(leg_sequenze(&somma, &somma_sq, &max)){
        printf("%d %d %d", somma, somma_sq, max);
    }




}