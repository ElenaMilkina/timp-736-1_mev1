#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main(void) {
	int n, a, maxElement;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		if (i == 0) maxElement = a;
		if (a > maxElement) maxElement = a;
	}
	
	printf("%d\n", maxElement);
	return 0;
}
