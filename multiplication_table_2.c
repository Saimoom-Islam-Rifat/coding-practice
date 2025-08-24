// Given a number n, write a program to print its multiplication table
// Recursive approach

#include <stdio.h>

void printTable(int n, int i) {
    //base case
    if (i == 11) {
        return;
    }
    printf("%d * %d = %d\n", n, i, n * i);
    i++;
    printTable(n, i);
}

int main(void) {
    int n = 5;
    printTable(n, 1);

    return 0;
}