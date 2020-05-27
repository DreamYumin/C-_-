#include<stdio.h>
#include<math.h>


int main3()
{
	int year, month, day;
	scanf_s("%d %d %d", &year, &month, &day);
	int month_i = 1;
	/**
	*根据月数算天
	*/
	while (month_i < month) {
		switch (month_i) {
		case 1:day += 31; break;
		case 2:day += 30; break;
		case 3:day += 31; break;
		case 4:day += 30; break;
		case 5:day += 31; break;
		case 6:day += 30; break;
		case 7:day += 31; break;
		case 8:day += 31; break;
		case 9:day += 30; break;
		case 10:day += 31; break;
		case 11:day += 30; break;
		case 12:day += 31; break;
		default:printf("error month\n"); break;
		}
		month_i++;
	}
	/*int label = 0;
	if (month % 4 == 0) {
		label = 1;
		if(label)
	}*/
	printf("%d year has %d days.\n", year, day);




	getchar();
	return 0;
}
