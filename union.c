#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void main() {

  typedef union{

    short individual;
    float dozen;

  } price;

  price appleAmount = {.dozen = 96};
  appleAmount.individual  = 8;

  printf("Amount of apple in dozen is %.2f Size of : %d\n\n", appleAmount.dozen, sizeof(appleAmount.dozen));
  printf("Amount of apple in dozen is %.d Size of : %d\n\n", appleAmount.individual, sizeof(appleAmount.individual));

  typedef struct {
    char *brand;
    price appleAmount;
  } appleProduct;

  appleProduct productOrdered = {"Raste ka maal", .appleAmount.dozen = 95};

  printf("You have to pay %.2f .Rs for %s product\n\n", productOrdered.appleAmount.dozen, productOrdered.brand);

}
