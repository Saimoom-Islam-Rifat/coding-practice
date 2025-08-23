// Given a number n, check whether it is even or odd. Return true for even and false for odd.
#include <stdio.h>
#include <stdbool.h>

bool isEven(int n) {
    return n % 2 == 0;
}

int main(void) {
    int n = 11;
    if(isEven(n)) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}