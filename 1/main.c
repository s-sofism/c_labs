#include <stdio.h>
#include <math.h>
#include "main.h"

int input()
{
	int a;
	while(scanf("%d",&a) != 1 || a < 8)
	{
		printf("enter correct value\n");
		while (getchar() != '\n') 
		{

		}
	}
	return a;
}

int calculating_five(int number)
{
	int number_five = (number+4)/5;
	int number_three = (number+2)/3;
	int i;
	for (i = 0; i <= number_five; i++)
	{
		int j;
		for (j = 0; j <= number_three; j++)
		{
			int temp_sum = 5 * i + 3 * j;
			if (temp_sum == number)
			{
				printf("number five : %d\n", i);
				i = number_five + 1;
				break;
			}
		}
	}
	return number_five;
}

int calculating_three(int number)
{
	int number_five = (number+4)/5;
	int number_three = (number+2)/3;
	int i;
	for (i = 0; i <= number_five; i++)
	{
		int j;
		for (j = 0; j <= number_three; j++)
		{
			int temp_sum = 5 * i + 3 * j;
			if (temp_sum == number)
			{
                printf("number three : %d\n", j);
				i = number_five + 1;
				break;
			}
		}
	}
	return number_three;
}

int main()
{
	while(1)
	{
		int number = input();
		calculating_five(number);
		calculating_three(number);
	}
	return 0;
}