#include <stdio.h>
#include <math.h>
#include <malloc.h>
#include <stdlib.h>

int main (void) {
	int n, sum = 0, a;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &a);
		sum += pow(-1, i) * pow(a, 2);
	}		

	printf("%d\n", sum);
	return 0;
}
