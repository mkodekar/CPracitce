#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 *bhenchod main hu Author
 * Rehan Kodekar hai mera naam
 * 22 sept 2016 ko banaya hu.
 */


 void generateRand(int* rand1, int* rand2){

    // if i would have put *rand1 = rand() % 50 it would have generated numbers from 1 to 49
    // but adding a  + 1 will generate numbers from 1 to 50.
    *rand1 = rand() % 50 + 1;
    *rand2 = rand() % 50 + 1;

    printf("Inside function value of rand1 %d and rand2  %d\n", *rand1, *rand2);



 }

void main() {

  // to get the data from the address we use & percent and to access
  // the data from the addess we use * after the data type.

  int primes[] = {2,3,5,7};

  char * employess[4] = {"Rehan", "Pritesh", "Santosh", "Akash"};

  printf("first index of primes is %d\n", *primes);

  printf("second index of primes is %d\n", *(primes + 1));

  printf("third index of primes is %d\n", *(primes + 2));

  printf("fourth index of primes is %d\n", *(primes + 3));

  for (int i = 0; i <=4; i++) {
    printf("%s : %d \n\n", employess[i], &employess[i]);
  }

  int rand1 = 0, rand2 = 0;

  printf("before functions call, value of rand1 %d and rand2 is %d\n\n", rand1, rand2);
  generateRand( &rand1, &rand2);
  printf("After functions call, value of rand1 %d and rand2 is %d\n\n", rand1, rand2);
}
