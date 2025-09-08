#include <stdio.h>
#include <string.h>

char* rev(char arr[]) {
	int len = strlen(arr);
	int i = 0;
	int j = len - 1;

	while (i<j) {
		char temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	i++;
	j--;
	}

	return arr;
}

int main() {
	char arr[100];

	printf("Enter the elemnts: ");
        scanf(" %s", arr);

	printf("%s", rev(arr));
	return 0;
}
