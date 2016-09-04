#include <stdio.h>
#include <stdlib.h>

void main() {
   printf("\n");

   char wholeName[13] = "Rehan Kodekar";

   int evenNumbers[3] = {2, 4, 6};

   int wholeNumbers[] = {1, 2, 3, 4, 5, 6};

   printf("The first number in evenNumbers is %d\n\n", evenNumbers[0]);

   char yourCity[30];
   //replace scanf with fgets
   printf("What city do you live in ? \n");
   fgets(yourCity, 30, stdin);
   printf("%s\n\n", yourCity);

   for(int i=0; i < 30; i++) {
       if (yourCity[i] == '\n') {
       
	   yourCity[i] = '\0';
	   break;
       }
   }
   printf("%s\n\n", yourCity);

}
