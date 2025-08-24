// Given a number n, write a program to print its multiplication table
// Iterative approach

#include <stdio.h>

void printTable(int n) {
    for (int i = 1; i <= 10; ++i) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
}

int main(void) {
    printTable(5);

    return 0;
}