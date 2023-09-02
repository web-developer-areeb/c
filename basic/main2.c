#include<stdio.h>

// data_type function_name(parameter_type parametername) {
//   return value_of_data_type;
// }

void newPrint(char *char1) {
  printf("The value is %s\n", char1);
};

int sum(int a, int b) {
  return a+b;
};

float average(float a, float b) {
  return (a+b)/2;
};


int main() {
  // newPrint("Hello World");
  // printf("%d\n", sum(10, 20));
  // printf("Average of 100 and 299 is %f\n", average(10, 15));

  // int arr[10] = {0, 1, 2, 3, 4, 5, 6, 70, 8, 9};
  // printf("%d\n", arr[7]);

  // int userInputArr[10];

  // for (int i = 0; i < 10; i++)
  // {
  //   printf("Enter the value for index %d\n", i);
  //   scanf("%d", &userInputArr[i]);
  // };

  // for (int i = 0; i < 10; i++)
  // {
  //   printf("Value at index %d is %d\n", i, userInputArr[i]);
  // };


  // char characterArray[5];
   
  // printf("Please enter value 5 character word\n");
  // for(int j=0; j< 5; j++) {
  //   scanf("%c", &characterArray[j]);
  // };

  // printf("You entered ");
  // for(int j=0; j< 5; j++) {
  //   printf("%c", characterArray[j]);
  // };
  // printf("\n");


  int a = 98;
  // Creating pointer variable.
  int *ptr = NULL;
  // Assign address of a to pointer variable.
  ptr = &a;
  printf("\n%d\n", a);

  // *ptr means value at ptr address. 
  // Assigning new value for value at ptr. 
  *ptr = 988;

  printf("%d\n", a);


  return 0;
}