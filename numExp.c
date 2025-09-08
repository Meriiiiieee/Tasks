 #include <stdio.h>

int power(int num, int exp){
        int result = 1;
	for(int i =0; i<exp; i++){
		 result = result * num;
	}
	
	return result;
}

int main () {

	int num = 0;
	int exp = 0;

	printf("Enter the number: ");
	scanf("%d", &num);

	printf("Enter the exponent: ");
	scanf("%d", &exp);

	printf("%d", power(num, exp));
	return 0;
}
