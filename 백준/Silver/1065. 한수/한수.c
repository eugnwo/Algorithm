#include <stdio.h>

int f(int x) {

	if (x <= 99) return 1;

	else if ((x / 100 + x % 10) == (2 * ((x / 10) % 10))) return 1;

	else return 0;
}

int main() {

	int n;

	int cnt = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (f(i) == 1) cnt++;
	}
	printf("%d", cnt);

	return 0;
}