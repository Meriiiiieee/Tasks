#include <stdio.h>
#define SIZE 4

int main() {
	int arr1[SIZE];
	int arr2[SIZE];
        
	printf("Enter the elemnts: ");
	for(int i = 0; i<SIZE; ++i) {
	    scanf("%d", &arr1[i]);
	}

	printf("Enter the elemnts: ");
	for(int i = 0; i<SIZE; ++i) {
	    scanf("%d", &arr2[i]);
 	}
	
	printf("Product of index: ");
        for( int i = 0; i<SIZE; ++i) {
	   printf("%d * %d = %d\n", arr1[i], arr2[i], arr1[i] * arr2[i]);
	}

	return 0;
}
