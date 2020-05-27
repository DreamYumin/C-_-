#include<stdio.h>
#include<math.h>
//P22

int main8()
{
	int m = 100, prime = 0;
	int k;
	while (m <= 200) {
		k = sqrt(m);
		prime = 1;
		for (int i = 2; i <= k; i++) {
			if (m % i == 0) {
				prime = 0;
				break;
			}
		}
		if (prime) {
			printf("The number %d is prime.\n", m);
		}
		else {
			printf("The number %d is not prime.\n", m);
		}
		m++;
	}

	getchar();
	return 0;
}
