#include <stdio.h>
#include <string.h>

int main() {
  char middleInitial;

  printf("What is your middleInitial ?\n");
  scanf(" %c", &middleInitial);
  char firstName[30], lastName[30];
  printf("What is your name\n");
  scanf("%s %s", firstName, lastName);
  printf("Your name is %s %c %s\n\n",firstName, middleInitial, lastName);
  int day, month, year;
  printf("What is your birthdate?\n");
  scanf("%d/%d/%d", &day, &month, &year);
  printf("\n Birthdate is %d/%d/%d\n\n", day, month, year);
}
