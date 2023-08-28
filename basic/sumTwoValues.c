#include<stdio.h>

int main() {
  int a, b, c;

  printf("Enter the first value.\n");

  scanf("%d",&a);

  printf("Enter the second value.\n");
  
  scanf("%d",&b);

  c = a+b;

  printf("Sum of %d and %d is %d\n", a,b,c);
  return 0;
}