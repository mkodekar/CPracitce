#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main() {

   int rand1 = 12, rand2 = 15;
   printf("Address of rand 1 = %d and rand2 = %d\n\n", &rand1, &rand2);
   printf("Physical Address of rand 1 = %p and Physical address of rand2 = %p\n\n", &rand1, &rand2);
   printf("Size if rand1 %d\n\n", sizeof(rand1));
   int * pRand1 = &rand1;
   printf("Address of pRand is %d\n\n", pRand1);
   printf("Physical address of pRand is %p\n\n", pRand1);
   printf("Value of pRand1 is %d\n\n", *pRand1);

}
