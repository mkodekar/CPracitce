#include<stdio.h>

int main() {
 
 /* logical operators are basically 
  * && - and
  * || - Or
  * ! - not !0 = 1 and !1 = 0
  */
 
  int bobage, salary, totalCustomer;

  printf("Enter Bob's age.\n");
  scanf("%d", &bobage);
  printf("Enter Bob's current salary.\n");
  scanf("%d", &salary);
  printf("Enter , how many customers bob has attended.\n");
  scanf("%d", &totalCustomer);

  if (bobage > 30 && salary < 30000 || totalCustomer > 25) {
	printf("Bob's age is %d , his current salary is %d and he has attended %d customers and is eligible for promotion\n\n", bobage, salary, totalCustomer);	
  } else {
        printf("Bob's age is %d , his current salary is %d and he has attended %d customers and is ineligible for promotion\n\n", bobage, salary, totalCustomer);
  }

}
