#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void generateRand(int* rand1, int* rand2) {
   // if i would have put *rand1 = rand() % 50 it would have generated numbers from 1 to 49
   // but adding a  + 1 will generate numbers from 1 to 50.
   *rand1 = rand() % 50 + 1;
   *rand2 = rand() % 50 + 1;

   printf("Inside function value of rand1 is %d and rand2 is %d\n\n", *rand1, *rand2);

}

void main() {
  int rand1 = 0, rand2 = 0;
  printf("\n\n");
  printf("before functions call, value of rand1 is %d and rand2 is %d\n\n", rand1, rand2);
  generateRand( &rand1, &rand2);
  printf("After functions call, value of rand1  is %d and rand2 is %d\n\n", rand1, rand2);
}
