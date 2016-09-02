#include <stdio.h>

int main() {
	
 int secretNumber = 7, numberGuessed = 0;

 while(1) {
     printf("Guess My Secret Number: \n");
     scanf("%d", &numberGuessed);

     if (numberGuessed == secretNumber) {
	  printf("That's my number, %d\n\n",numberGuessed);
	  break;
     }
 } 

}
