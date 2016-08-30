#include<stdio.h>
#include<string.h>

int main() {

  // +, -,  *, /, %

  int num1 = 12, num2 = 15, numAns;

  float dec1 = 1.2, dec2 = 1.4, decAns;

  printf("The division of the decimals are %d\n\n", num2 / num1 );
  printf("float calculation %f\n\n", dec2 / dec1);
  printf("The mod is %d\n\n", num2 % num1);
  printf("without paranthese %f\n\n", num2 + dec1 * dec2);
  printf("with paranthese %f\n\n", (num2 + dec1) * dec2);

}
