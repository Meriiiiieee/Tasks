#include <stdio.h>
#define SIZE 4

int main() {
	int arr[SIZE];
	int num = 0;

	printf("Enter the elemnts: ");
	for (int i =0; i<SIZE; i++) {
	    scanf("%d", &arr[i]);
	}

	printf("Enter the numner: ");
	scanf("%d", &num);

	for(int i = 0; i<SIZE; i++){
	   if(num == arr[i]) {
              printf("Yes: ");
		return 0;
	   }
	}

printf("No: ");
return 0;
}
