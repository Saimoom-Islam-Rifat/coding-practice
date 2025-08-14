#include <stdio.h>

int main(void) {
  int x = 4, y, z;

  y = --x; // y = 3, x = 3
  z = x--; // z = 3, x = 2

  printf("%d\n", x); // 2
  printf("%d\n", y); // 3
  printf("%d\n", z); // 3
  printf("%d\n", x + y + z); // 8
  
  return 0;
}
/* This C program demonstrates the usage of pre-decrement and post-decrement operators (--) and their effects on variables. Let's break down what happens step by step:

int x = 4, y, z;: Declare three integer variables x, y, and z, and initialize x with the value 4.

y = --x;: The pre-decrement operator -- is applied to x before its value is assigned to y. So, x is decremented to 3, and then y is assigned the value of x, which is 3.

z = x--;: The post-decrement operator -- is applied to x after its value is assigned to z. So, z is assigned the current value of x, which is 3, and then x is decremented to 2.

printf("%d\n", x);: Print the value of x. At this point, x holds the value 2.

printf("%d\n", y);: Print the value of y. y was assigned the pre-decremented value of x, which was 3.

printf("%d\n", z);: Print the value of z. z was assigned the post-decremented value of x, which was 3 at the time of assignment.

printf("%d\n", x + y + z);: Print the sum of x, y, and z. So, this prints 2 + 3 + 3 = 8. */