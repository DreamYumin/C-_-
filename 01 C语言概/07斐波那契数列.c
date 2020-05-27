#include<stdio.h>
#include<math.h>


int main7()
{
	/*int F_1 = 1,F_2=1,count=0;
	int F = 0;
	printf("%d\n", F_1);
	printf("%d\n", F_2);
	for (int i = 0; i < 38; i++) {
		F = F_1 + F_2;
		F_1 = F_2;
		F_2 = F;
		prin
		tf("%d,%d\n",count, F);
		count++;
	}*/
	long int f1, f2;
	int i;
	f1 = 1; f2 = 1;
	for (i = 0; i < 20; i++) {
		printf("%12ld%12ld\n", f1, f2);
		/*if (i % 2 == 0) {
			printf("\n");
		}*/
		f1 = f1 + f2;
		f2 = f1 + f2;
	}

	getchar();
	return 0;
}
