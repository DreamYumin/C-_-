#include<stdio.h>


int main5()
{
	int num, count = 0;
	int i, j, k;
	for (i = 1; i <= 4; i++) {
		for (j = 1; j <= 4; j++) {
			for (k = 1; k <= 4; k++) {
				if (i == j || i == k || j == k) {
					continue;
				}
				num = i * 100 + j * 10 + k;
				printf("the number is %d\n", num);
				count++;
			}
		}
	}
	printf("the total is %d.", count);

	getchar();
	return 0;
}
