#include <stdio.h>

void printGuGudan(int a, int b);

int main(void) {

	int num1=0, num2=0;

	printf("Input Two Number ->");

	fflush(stdout);
	scanf("%d %d", &num1, &num2);

	printGuGudan(num1, num2);
	return 0;
}

void printGuGudan(int a, int b) {
	if(a > b) {
		int temp = a;
		a = b;
		b = temp;
	}

	for(int i = a; i <= b; i++) {
		for(int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}
}
