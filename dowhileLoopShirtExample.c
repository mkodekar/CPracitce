#include <stdio.h>

int main() {

  char sizeOfShirt;

  do{
      printf("What Size of shirt do you wear (S, M, L) : ");
      scanf(" %c", &sizeOfShirt); 
  } while(sizeOfShirt != 'S' && sizeOfShirt != 'M' && sizeOfShirt != 'L');  
}
