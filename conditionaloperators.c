#include <stdio.h>
#include <string.h>

int main() {
   int number;
	  
   printf("How many Apples you bought ?\n");
   scanf("%d", &number);
   printf("You bought %s Apples\n\n", (number > 1) ? "many" : "one");
}
