#include <stdio.h>

int fib(int num) {
	if(num<=1){
	  return num;
	 }

	return fib(num-1) + fib(num-2);
}

int main() {
	int num = 0;

	printf("Enter the number: ");
	scanf("%d", &num);

	printf("%d", fib(num));
	return 0;
}

