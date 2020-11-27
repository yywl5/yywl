#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int y;
	scanf("%d", &y);
	while (y--) {
		int a[1000], n, i, k = 1, x;
		scanf("%d", &n);
		for (i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		int j, t;
		for (k = 1, x = 1; k <= n; k++, x++) {
			j = 0;
			while (k <= n) {
				k = a[k - 1];
				if (k == x) {
					break;
				}
				j++;
			}
			printf("%d\n", j + 1);
		}
	}
	return 0;
}
