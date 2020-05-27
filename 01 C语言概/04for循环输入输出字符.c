#include<stdio.h>
#include<math.h>


int main4()
{
	int i; char c;
	for (i = 0; (c = getchar()) != '\n'; i += c);
	for (; (c = getchar()) != '\n';) {
		printf("%c", c);
	}

	getchar();
	return 0;
}
