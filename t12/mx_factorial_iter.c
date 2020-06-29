// #include <stdio.h>

int mx_factorial_iter(int n) {
	
	if (n < 0 || n > 12) {
		return 0;
	}

	if (n == 0 || n == 1) {
		return 1;
	}

	int result = 1;

	for (int i = 1; i <= n; ++i) {
		result *= i;
	}

	return result;
}

// int main() {
// 	int a = mx_factorial_iter(5);
// 	printf("%d\n", a);
// 	return 0;
// }
