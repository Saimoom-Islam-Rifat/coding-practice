// [Efficient Approach] Using Bitwise AND Operator - O(1) Time and O(1) Space

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isEven(int n) {
    if ((n & 1) == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n = 14;

    if(isEven(n)) {
        printf("True");
    } else {
        printf("false");
    }

    return 0;
}