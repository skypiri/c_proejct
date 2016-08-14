/*
 * main.c
 *
 *  Created on: 2016. 8. 15.
 *      Author: skypiri
 */


#include <stdio.h>

int main(void) {

	int prime = 0;

	for(int i = 2; i <= 10; i++) {
		for(int j = 1; j <= i; j++) {
			if(j == 1 || j == i) {
				if(i % j == 0) {
					prime = 1;
				}
			} else {
				prime = 0;
				continue;
			}
		}
		if(prime) {
			printf("Prime : %d\n", i);
			prime = 0;
		}
	}

	return 0;
}
