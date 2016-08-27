#include<stdio.h>
#include<string.h>

int globalVar = 100;

#define MyName "Rehan Kodekar"

int main() {
  char firstLetter = 'R';
  int age = 25;
  long int superBignum = -32344400;
  float piVal = 3.14159;
  double reallyBigPi = 3.134443393291;
  printf("\n");

  // \n \t - tab and next line

  printf("This will print to screen\n\n");

  printf("I am %d years old\n\n", age);

  printf("Big numver %ld\n\n",superBignum);
  printf("Pi = %.3f\n\n", piVal);
  printf("Big Pi = %.10f \n\n",reallyBigPi);
  printf("The firstLetter in my name is %c\n\n",firstLetter);
  printf("My name is %s\n", "Rehan Kodekar");
}
