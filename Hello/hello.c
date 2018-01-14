/*
 * hello.c
 *
 *  Created on: 2016. 8. 14.
 *      Author: skypiri
 */


#include <stdio.h>

int main(void) {

	int a[12] = {10, 20, 30, 40, 50, 60, 70, 80, 11, 22, 33, 44};

	int *p = a;
	char *q = (char *)a;

	int (*r)[4] = (int (*)[4])a;
	int (*s)[3] = (int (*)[3])a;
	int (*t)[2][3] = (int (*)[2][3])a;

	printf("%d, %d\n", p[0], p[1]);
	printf("%d, %d\n", q[0], q[1]);
	printf("%#.8x, %#.8x, %#.8x\n", r[0], r[1], r[1] - r[0]);
	printf("%#.8x, %#.8x, %#.8x\n", s[0], s[1], s[1] - s[0]);
	printf("%#.8x, %#.8x, %#.8x\n", t[0], t[1], t[1] - t[0]);

	return 0;
}
