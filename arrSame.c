#include <stdio.h>
#include <stdbool.h>
#define SIZE 5

bool same(int arr1[], int arr2[]) {
	for(int i =0; i<SIZE; i++){
        if(arr1[i] != arr2[i]){
           return true;
	} 
	}
	   return false;
}

int main() {
	int arr1[SIZE];
	int arr2[SIZE];

	printf("Enter the elemnts :");
	for(int i = 0; i<SIZE; i++) {
	   scanf("%d", &arr1[i]);
	}

	printf("Enter the elemnts: ");
	for (int i =0; i<SIZE; i++) {
	   scanf("%d", &arr2[i]);
	}

        if(same(arr1, arr2)) {
	   printf("It's not same: ");
	} else {
	   printf("It's same: ");
	  }

       return 0;
}
