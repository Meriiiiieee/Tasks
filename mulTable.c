#include <stdio.h> 
int mul(int n) {
	for(int i = 0; i<=10; i++) {
	    printf("%d * %d = %d\n", n, i, n * i);
 	}
	return 0;
}

int main() {
	int n= 0;

	printf("Enter the number: ");
	scanf("%d", &n);

	printf("%d", mul(n));
	return 0;
}
