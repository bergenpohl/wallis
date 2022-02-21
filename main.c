#include <stdio.h>

int	main() {
	double res;
	double pi;
	double a, b;

	res = 1;
	a = 2;
	b = 1;
	for (double i = 0; i < 100000000; i++) {
		res *= 	a / b;
		b += 2;
		res *= a / b;
		a += 2;
	}
	pi = res * 2;
	printf("pi: %.15f\n", pi);
	return (0);
}
