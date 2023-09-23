/* Comparing single integers instead of snowflakes (arrays of 6 integers). */
#include <stdio.h>

void identify_identical(int values[], int n) {
	int i, j;

	for (i = 0; i < n; i++) {
		for (j = i+1; j < n; j++) {
			if (values[i] == values[j]) {
				printf("Twin integers found:\n");
				printf("integer %d - %d\tand\tinteger %d - %d", i, values[i], j, values[j]);
				return;
			}
		}
	}

	printf("No two integers are alike.");
}

int main(int argc, char* argv[]) {
	int a[5] = {1, 2, 3, 1, 5};
	identify_identical(a, 5);

	return 0;
}
