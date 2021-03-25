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
	int temp=0;
	for (i = 0; i <= number_five; i++)
	{
		int j;
		for (j = 0; j <= number_three; j++)
		{
			int temp_sum = 5 * i + 3 * j;
			if (temp_sum == number)
			{
				temp=i;
				i = number_five + 1;
				break;
			}
		}
	}
	return temp;
}

int calculating_three(int number)
{
	int number_five = (number+4)/5;
	int number_three = (number+2)/3;
	int i;
	int j;
	for (i = 0; i <= number_five; i++)
	{
		for (j = 0; j <= number_three; j++)
		{
			int temp_sum = 5 * i + 3 * j;
			if (temp_sum == number)
			{
				i = number_five + 1;
				break;
			}
		}
	}
	return j;
}

int main()
{
	while(1)
	{
		int number = input();
		printf("number five : %d\n", calculating_five(number));
		printf("number three : %d\n", calculating_three(number));
		
	}
	return 0;
}
