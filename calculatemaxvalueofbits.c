#include <stdio.h>

int main(){
  printf("\n");

  int numberHowBig = 0;
  printf("How many bits ?\n");
  scanf("%d", &numberHowBig);
  printf("\n\n");

  // 0 : Print what is given
  // 1 : Print what is given
  // 2 : 1 + 2 = 3 11
  // 3 : 3 + 4 = 7 111
  // 4 : 7 + * = 15 1111

  int myIncreamentor = 1, myMultiplier = 1,
      finalValue = 1;

  while(myIncreamentor < numberHowBig) {
   myMultiplier *= 2;
   finalValue = finalValue + myMultiplier;
   myIncreamentor++;
  }

  if((numberHowBig == 0) || (numberHowBig == 1)) {
     printf("Top Value: %d\n\n", numberHowBig);

  } else {
      printf("Top Value : %d\n\n", finalValue);
  }

}
