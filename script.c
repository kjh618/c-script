#!/usr/bin/env -S sh -c "{ echo '#include <stdio.h>' && echo 'int main(void) {' && sed 's/#!.*//' script.c && echo '}'; } | gcc -x c - && ./a.out && rm a.out"

printf("Hello, world!\n");

int number;
printf("Enter a number: ");
scanf("%d", &number);
if (number < 10) {
	printf("The number is less than 10.\n");
} else {
	printf("The number is greater than or equal to 10.\n");
}

