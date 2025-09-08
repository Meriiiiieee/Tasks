#include <stdio.h>

int fact(int n) {
	 int fact = 1;
	 if(n <=1){
		return 1;
	  }

	for( int i =1; i<=n; i++){
	     fact = fact * i;
	}

	return fact;
}

int main() {
	int n =0;

	printf("Enter the number: ");
	scanf("%d", &n);

	printf("%d",fact(n));
	return 0;
}
