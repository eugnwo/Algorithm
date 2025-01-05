#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int com(const void* a, const void* b) {

	return *(int*)a - *(int*)b;
}

int d[1000001];

int main() {

	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &d[i]);
	}
	
	qsort(d, n, sizeof(int), com);

	for (int i = 0; i < n; i++) {
		printf("%d\n", d[i]);
	}

	return 0;
}