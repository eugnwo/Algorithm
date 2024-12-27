#include <stdio.h>

int d[10001];

int f(int x) {

	if (x == 0) {
		return 0;
	}

	return f(x / 10) + (x % 10);
}

int main() {
    
	for (int i = 1; i <= 10000; i++) {
		d[f(i) + i]++;
	}
	for (int i = 1; i <= 10000; i++) {
		if (d[i] == 0) printf("%d\n", i);
	}
}