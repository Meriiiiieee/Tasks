#include <stdio.h>

int main() {
	int i = 0;
	int j = 0;

	for(int i = 0; i<=10; i++) {
		printf("%d\n", i);
	    for(int j = 0; j<=10; j++) {
		printf("%d * %d = %d\n", i, j, i * j);
	    }
	}

	return 0;
}
