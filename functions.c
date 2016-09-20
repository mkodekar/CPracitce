#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int globalVariable;
int age;

int addTwoNumbers(int num1, int num2) {

	return num1 + num2;
}

void changeVaraible() {
	globalVariable = 68;
	printf("global variables after changing value, value is %d\n\n", globalVariable);
	int age = 20;
	printf("local variable after changing value, value is %d\n\n", age);
	int addition = addTwoNumbers(globalVariable, age);
	printf("the addition is %d \n\n", addition);


}

void main() {

	globalVariable = 60;
	int age = 20;

	printf("Global variable before changing value in main function, value is %d\n\n", globalVariable);
	printf("local variable before changing value in main function, value is %d\n\n", age);
	int total = addTwoNumbers(4, 5);

	int totalSum = addTwoNumbers(globalVariable, total);

	printf("The total is %d\n\n", totalSum);

	changeVaraible();
}

