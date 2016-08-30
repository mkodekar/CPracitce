#include <stdio.h>


int main() {

  int num1, num2;

  printf("Enter first number you want to relate\n");
  scanf("%d", &num1);
  printf("Enter second number you want to relate\n");
  scanf("%d", &num2);
  printf("first number : %d and second number : %d \n\n", num1, num2);
  printf("Is num1 > num2 : %d\n",num1 > num2);

  if (num1 > num2) {
    printf("first number is greater than the second number\n");
  } else if (num1 < num2) {
    printf("second number is greater than first number\n");
  } else{
    printf("first number equals to second number \n");
  }

}
