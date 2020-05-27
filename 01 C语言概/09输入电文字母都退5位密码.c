#include<stdio.h>
#include<math.h>


int main9()
{
	char c = '0';
	while ((c = getchar()) != '\n') {
		if (c >= 'A' && c <= 'Z') {
			putchar((c - 60) % 26 + 64);
		}
		else if (c >= 'a' && c <= 'z') {
			putchar((c - 92) % 26 + 96);
		}
		else { 
			putchar(c);
		}
	}
	getchar();
	while ((c = getchar()) != '\n') {
		if ((c >= 'E' && c <= 'Z') || (c >= 'e' && c <= 'z')) {
			putchar(c - 4);
		}
		else if ((c >= 'A' && c <= 'D') || (c >= 'a' && c <= 'd')) {
			putchar(c + 22);
		}
		else {
			putchar(c);
		}
	}

	getchar();
	return 0;
}
