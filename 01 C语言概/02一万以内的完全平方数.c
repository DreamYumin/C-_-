#include<stdio.h>
#include<math.h>


int main2(){
	/*double a = 0;
	while (a < 10000) {
		if (((int)sqrt(a + 100) * (int)sqrt(a + 100) == (a + 100)) && ((int)sqrt(a + 268) * (int)sqrt(a + 268) == (a + 268)))
		{
			printf("a=%f\n", a);
		}
		a++;
	}*/
	/*long int i=1;
	while (i < 10000) {
		if ((sqrt(i + 100) * sqrt(i + 100) == (i + 100)) && (sqrt(i + 268) * sqrt(i + 268) == (i + 268)))
		{
			printf("i=%d\n", i);
		}
		i++;
	}*/
	long int i, x, y, z;
	for (i = 1; i < 100000;i++) {
		x = sqrt(i + 100);
		y = sqrt(i + 268);
		if (x * x == i + 100 && y * y == i + 268)
		{
			printf("\ni=%ld\n", i);
		}
	}
	getchar();
	return 0;
}
