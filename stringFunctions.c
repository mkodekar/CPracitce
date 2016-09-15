#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void main() {
  
  char thirdCity[] = "Goa";

  char myCity[23] = "Mumbai";

  printf("Is my city Mumbai? %d\n\n", strcmp(myCity, thirdCity));

  char yourState[] = ", Maharashtra";
  strcat(myCity, yourState);

  printf("I live in %s\n\n", myCity); 
  printf("Letters in Goa : %d\n\n", strlen(thirdCity));
  memcpy(myCity, "El Pueblo del la Reina de Los Angeles", sizeof(myCity));

  printf("New City is %s\n\n", myCity);
}
