#include<stdio.h>
#include<string.h>

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

struct Books
{
  char name[50];
  char author[50];
  int price;
  
} book;

void printStructure(struct Books bk) {
  printf("Author name is %s\n", bk.author);
  printf("Book name is %s\n", bk.name);
  printf("Book price is %d\n", bk.price);
};

int main() {

  //*************************** Functions ********************

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


  //********************* Pointers ************************

  // int a = 98;
  // // Creating pointer variable.
  // int *ptr = NULL;
  // // Assign address of a to pointer variable.
  // ptr = &a;
  // printf("\n%d\n", a);

  // // *ptr means value at ptr address. 
  // // Assigning new value for value at ptr. 
  // *ptr = 988;

  // printf("%d\n", a);

  // //********************* Pointers ************************

  // // Character arrya terminate with '\0' i.e. end of string. 
  // char name[3] = {'m', 'y', '\0'};
  // char str1[65], str2[98], str3[32];

  // printf("%s\n", name);

  // // Copy name to str1
  // strcpy(str1, name);
  // printf("%s\n", str1);

  // strcpy(str1, "Areeb ");
  // printf("%s\n", str1);

  // strcpy(str2, "Ahmad");
  // strcat(str1, str2);
  // printf("%s\n", str1);

  // strcpy(str1, "ebc");
  // strcpy(str2, "def");
  // printf("%d\n", strcmp(str1, str2));

 //******************* Structure ********************
  struct Books bk1, bk2;
  strcpy(bk1.name, "C Programming");
  strcpy(bk1.author, "Dennis");
  bk1.price = 78;

  printStructure(bk1);  

  return 0;
}