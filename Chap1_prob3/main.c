/*
 * main.c
 *
 *  Created on: 2016. 8. 14.
 *      Author: skypiri
 */


#include <stdio.h>
int main(void) {
	int num1, num2;

	printf("Input two number :");
	fflush(stdout);

	scanf("%d %d", &num1, &num2);

	/* swap two number */
	if(num1 > num2) {
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}

	int gcd;
	for(int i = 1; i < num2; i++) {
		if(num1 % i == 0 && num2 % i == 0) {
			gcd = i;
		}
	}

	printf("Max GCD : %d\n", gcd);

	return 0;
}
