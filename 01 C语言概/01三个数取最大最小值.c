#include<stdio.h>
#include<math.h>

int main1()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	int max, min;
	/*if (a > b){
		if (b > c) {
			printf("max=%d,min=%d\n", a, c);
		}
		else {
			printf("max=%d,min=%d\n", a, b);
		}
	}
	else {
		if (a > c) {
			printf("max=%d,min=%d\n", b, c);
		}
		else {
			printf("max=%d,min=%d\n", b, a);
		}
	}???????*/
	if (a > b) {
		max = a;
		min = b;
	}
	else {
		max = b;
		min = a;
	}
	if (c > max) {
		max = c;
	}
	else if (c < min) {
		min = c;
	}
	printf("max=%d,min=%d\n", max, min);

	getchar();
	return 0;
}
