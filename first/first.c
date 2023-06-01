#include<stdio.h>

int main() {
  char man_name[20],
  woman_name[20];

  printf("Enter man name \n");
  scanf("%s", &man_name);
  printf("Enter woman man name \n");
  scanf("%s", &woman_name);

  printf("%s loves %s.", &man_name, &woman_name);
  return 0;
}

// install gcc compiler one time
// install c/c++ Intellisense Microsoft extenstion vs code one time
// gcc -o haha first.c  to create executable file one time for new file
// ./haha to execute  everytime
