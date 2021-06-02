#include <stdio.h>

int testing(char a, char b)
{
	int tr = 0;
	if (a != b)
	{
		tr = 1;
	}
	return tr;
}
int main()
{
	printf("enter the text\n");
	char text[1000];
	fgets(text, 1000, stdin);
	char words[100][10];
	int tmp1 = 0, tmp2 = 0;
	for ( tmp1 = 0; tmp1 < 100; tmp1++)
	{
		for (tmp2 = 0; tmp2 < 10; tmp2++)
		{
			words[tmp1][tmp2] = '0';
		}
	}
	int j = 0;
	int k = 0;
	int counter = 1;
	int i = 0;
	for (i; text[i] != '\n'; i++)
	{
		if (text[i] != ' ')
		{
			words[j][k] = text[i];
			k++;
		}
		else
		{
			j++;
			counter++;
			k = 0;
		}
	}
	int mas[20];
	int tmp3 = 0;
	for (tmp3 = 0; tmp3 < 20; tmp3++)
	{
		mas[tmp3] = 0;
	}
	int z = 0;
	for (z; z < counter + 1; z++)
	{
		int number = 0;
		if (mas[z] == 0)
		{
			int i = z;
			for (i; i < counter; i++)
			{
				int tr = 0;
				int r = 0;
				for (r = 0; r < 10; r++)
				{
					if (testing(words[z][r], words[i][r]) !=0)
					{
						tr = testing(words[z][r], words[i][r]);
					}
				}
				if (tr == 0)
				{
					mas[i] = 1;
					mas[z] = 1;
					number++;
				}
			}
			int t = 0;
			for (t; words[z][t] != '0'; t++)
			{
				printf("%c", words[z][t]);
			}
			if (number != 0)
			{
				printf("%c", ':');
				printf("%d \n", number);
			}
		}
	}
    getchar();
    system("pause");
	return 0;
}
