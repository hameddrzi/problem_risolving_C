//https://leetcode.com/problems/palindrome-number/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>


bool isPalindrome(int *x) {
    size_t len = strlen(x);
    bool palindrome = true;
    for (size_t i = 0; i < len; ++i) {
        if(x[i] != x[len - i- 1])
            palindrome = false;
    }
    return palindrome;
}

int main(){
    size_t N[10];
    scanf("%10d", &N);
    if(isPalindrome(&N)){
        printf("palindrome");
    }else
        printf("NOT palindrome");
}