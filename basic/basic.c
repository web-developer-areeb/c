#include<stdio.h>

int main() {
  int a = 781; // 2 to 4 byte depending on architecture
  unsigned int storeBigValue = 3423; // positive integers
  unsigned short integerValue = 8; 
  short forShortValues = 8; // for short values
  long forLongValues = 843434; // for long values


  float b = 8.78; // 4 bytes - 6 decimal places
  double myFloat1 = 7.4534; // 8 bytes 15 decimal places
  long double myFloat2 = 7.4533451352345; // 16 bytes 19 decimal places precision

  // single quote for single character and double quote for string
  // char stores single character
  // char c = 't'; // 1 byte

  // const int i = 9;
  // i = 10; Not allowed
  

  // printf("\nPrinting integer value %d\n", a);
  // printf("Printing float value %f\n", b);
  // printf("Printing char value %c\n\n", c);

  // printf("The size taken by short int is %lu\n", sizeof(short int));
  // printf("The size taken by int is %lu\n", sizeof(int));
  // printf("The size taken by unsigned int is %lu\n", sizeof(unsigned int));
  // printf("The size taken by float is %lu\n", sizeof(float));
  // printf("The size taken by double is %lu\n", sizeof(double));
  // printf("The size taken by long double is %lu\n", sizeof(long double));
  // printf("The size taken by char is %lu\n", sizeof(char));

  // int tomato = 10;
  // int mango = 20;

  // Operators 
  // Arithmatic +, -, *, /, %(modulus), ++ (increment), -- (decrement)
  // Relational ==, !=, >, <, <=, >=
  // Logical 
  // Bitwise
  // Assignment
  // Misc Operators

  // Arithmatic
  // printf("Increase and then print %d\n", ++tomato);
  // printf("Print and then increase %d\n", mango++);

  // Relational
  // printf("%d\n", tomato > mango);

  // Relational
  // printf("%d\n", mango && tomato);

  // Bitwise operator
  // A = 60 B = 13
  // A = 00111100
  // B = 00001101
  // R = 00001100 result of & 

  // int A = 60, B = 13;

  // printf("Bitwise AND operator returned %d\n", A&B);
  // printf("Bitwise OR operator returned %d\n", A|B);
  // printf("Bitwise XOR operator returned %d\n", A^B);
  // printf("Bitwise ONCE COMPLEMENT operator returned %d\n", ~B);
  // printf("Bitwise LEFT SHIFT operator returned %d\n", A<<B); 
  // printf("Bitwise RIGHT SHIFT operator returned %d\n", A>>B); 


  // Assigment Operators
  // =, +=, -=, *=, %, etc..
  // int ha = 9;
  // ha += 9;
  // printf("ha is %d\n", ha);

  // Misc operators
  // address of (ampersend) :  &
  // value at : *
  // ?

  // printf("\n\n *********** Taking input from user in c *********");
  // int userInput;
  // printf("\nPlease enter the value of userInput\n");
  // scanf("%d", &userInput); 
  // printf("You entered %d\n", userInput);

  // *********************** Type Casting *********************

  // printf("You entered %f\n", (float) userInput); //changin to float

  // int num1, num2;

  // printf("Please enter first number\n");
  // scanf("%d", &num1);
  // printf("Please enter second number\n");
  // scanf("%d", &num2);
  // printf("num1/num2 is %f\n", (float) num1/num2);

  // printf("\n\n *********** Decision Making *********\n\n");
  // int age;
  // int blackPoints;
  // printf("Enter you age\n");
  // scanf("%d", &age);
  // printf("Enter you age black point\n");
  // scanf("%d", &blackPoints);

  // if(age < 16) {
  //   printf("You can not drive. \n");
  // } else if (blackPoints >= 24) {
  //   printf("You are ban from driving. \n");
  // } else {
  //   printf("You can drive. \n");
  // }


  // int country;
  // printf("Enter choice 1 or 2. \n 1. India \n 2. USA");
  // scanf("%d", &country);

  // switch (country)
  // {
  // case 1:
  //   printf("Drive at left side on road\n");
  //   break;

  // case 2:
  //   printf("Drive at right side of road\n");
  //   break;
  
  // default:
  //   printf("You choose the wrong answer");
  //   break;
  // }

   

  return 0;
}