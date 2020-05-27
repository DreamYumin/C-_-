#include<stdio.h>
#include<math.h>


int main6()
{
	int a = 1, count = 0;
	double Pi_4 = 0;
	/*
	*这里不能是1/a，必须得是1.0/a
	*可以用到fabs，用于求浮点数x的绝对值
	*/
	/*while ((1.0 / a) > 0.0001)
	{
		if ((a - 1) % 4 == 0) {
			Pi_4 += 1.0 / a;
		}
		else {
			Pi_4 -= 1.0 / a;
		}
		printf("%g\n", Pi_4);
		a += 2;
		count++;
	}
	printf("The total is %d, the PI is %g\n", count, Pi_4 * 4);*/

	int s; float n, t, pi;
	t = 1; pi = 0; n = 1.0; s = 1;
	while (fabs(t) > 1e-6) {
		pi = pi + t; n += 2;  s = -s; t = s /n+2;
	}
	pi = pi * 4;
	printf("pi=%10.6f\n", pi);
	getchar();
	return 0;
}
