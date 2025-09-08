#include <stdio.h>
#define SIZE 4

int main() {
	int arr[SIZE];
	int sum = 0;

	printf("Enter the elemnts: ");
	for(int i = 0; i<SIZE; i++){
	    scanf("%d", &arr[i]);
 	}

	for(int i =0; i<SIZE; i++) {
 	     sum += arr[i];
	}

        printf("The average is %d: ", sum / SIZE);
	return 0;
}
