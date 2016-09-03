#include<stdio.h>
#include<stdlib.h>

void main() {
  
  int whatToDo = 0;

  do{
    printf("1.Pikachu\n");
    printf("2.Charlizard\n");
    printf("3.guarados\n");
    printf("4.exit\n");
    scanf("%d", &whatToDo);   
  }while(whatToDo < 1 || whatToDo > 4);

  switch(whatToDo){
     case(1) : 
	   printf("You chose Pickachu\n");
	   break;
     case(2) :
	   printf("You chose Charlizard\n");
	   break;
     case(3) :
	   printf("You chose Guarados\n");
	   break;
     default :
	   printf("system exiting\n");
	   exit(0);
	   break;
  }
	
}
