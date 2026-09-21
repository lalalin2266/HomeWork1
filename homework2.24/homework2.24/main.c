#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int num1;
	scanf("%d", &num1);
	if (num1 % 2 == 0) {
		printf("%d is even.\n", num1);
	}
	else {
		printf("%d is odd.\n", num1);
	}
	return 0;
}