#include<stdio.h>

// How to run this file
// 1. Navigate to this file (cd takingUserInput.c)
// 2. Press cmd+1 to compile and run the file

int main() {
  printf("\n\n *********** Taking input from user in c *********");

  // address of (ampersend) :  &
  int userInput;

  printf("\nPlease enter the value of userInput\n");
  scanf("%d", &userInput); 
  printf("You entered %d\n", userInput);

  // *********************** Type Casting *********************

  printf("You entered %f\n", (float) userInput); //changin to float

  return 0;
};
  