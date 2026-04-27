#include <stdio.h>

int main() {
	for (int i = 1; i <= 100; i++) {
		if (i % 2 != 0) printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0) printf("%d ", i);
	}
	printf("\n");
	for (int i = 2; i <= 100; i++) {
		int isPrime = 1;
		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime) printf("%d ", i);
	}
	return 0;
}
