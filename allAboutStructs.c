#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct computer {

  const char * brandNAme;
  const char * modelNum;
  int price;
  int warranty;
};

struct specs {
  char *processor;
  int ram;
};

typedef struct anotherComputer {
  const char * brandNAme;
  const char * modelNum;
  int price;
  int warranty;
  struct specs specifications;

}anotherComputer;


void setWarranty(struct computer *theComputer, int newWarranty) {
  theComputer->warranty = newWarranty; // the can also be written as (*theComputer).warranty = newWarranty
  printf("The new warranty is %d\n\n", theComputer->warranty);// the can also be written as (*theComputer).warranty = newWarranty
  // the -> means the variable in the struct theComputer

}

void getComputer(struct computer theComputer) {

  printf("brandNAme %s\n\n", theComputer.brandNAme);
  printf("modelNum %s\n\n", theComputer.modelNum);
  printf("price %d\n\n", theComputer.price);
  printf("warranty %d\n\n", theComputer.warranty);
}

void getComputerMemoryLocation(struct computer theComputer) {

  printf("brandNAme %d\n\n", theComputer.brandNAme);
  printf("modelNum %d\n\n", theComputer.modelNum);
  printf("price %d\n\n", &theComputer.price);
  printf("warranty %d\n\n", &theComputer.warranty);

}

void getAnotherComputer(struct anotherComputer theAnotherComp) {
  printf("brandNAme %s\n\n", theAnotherComp.brandNAme);
  printf("modelNum %s\n\n", theAnotherComp.modelNum);
  printf("price %d\n\n", theAnotherComp.price);
  printf("warranty %d\n\n", theAnotherComp.warranty);
  printf("processor %s\n\n", theAnotherComp.specifications.processor);
  printf("Memory %d\n\n", theAnotherComp.specifications.ram);
}


void main() {

  struct computer lenevo = {"Lenevo", "L412", 18000, 2};
  getComputer(lenevo);
  getComputerMemoryLocation(lenevo);
  anotherComputer lenevo2 = {"Lenevo", "T410", 20000, 2, {"Intel", 4}};
  getAnotherComputer(lenevo2);
  setWarranty(&lenevo, 4);
  printf("The new warranty in Main() is %d\n\n", lenevo.warranty);

}
