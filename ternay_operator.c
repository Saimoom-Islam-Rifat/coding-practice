// Find the largest among seven numbers using ternary operator
#include <stdio.h>

int main(void) {
  int a, b, c, d, e, f, g, largest;

  printf("Enter 7 integers seperated by a space: ");
  scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);

  largest = (a > b && a > c && a > d && a > e && a > f && a > g) ? a:
    (b > c && b > d && b > e && b > f && b > g) ? b:
    (c > d && c > e && c > f && c > g) ? c:
    (d > e && d > f && d > g) ? d:
    (e > f && e > g) ? e:
    (f > g) ? f: g;

  printf("\nThe largest number is %d.", largest);

  return 0;
}