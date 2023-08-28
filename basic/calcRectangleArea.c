#include<stdio.h>

int main () {
  float length, width;

  printf("Please Enter lenght of rectangle\n");
  scanf("%f", &length);
  printf("Please Enter width of rectangle\n");
  scanf("%f", &width);
  printf("Area of rectangle is %f", length*width);
  return 0;
}