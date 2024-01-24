#include<stdio.h>
int main()
{
	int year, n;
	double rate = 0.0225, capital, deposit;
	printf("capital:");
	scanf_s("%lf", &capital);
	printf("year:");
	scanf_s("%d", &year);
	for (n = 1; n <= year; n++)
	{
		deposit = capital * (1 + rate);
		capital = deposit;
     }
	printf("deposit:%Lf", deposit);
	return 0;
}
