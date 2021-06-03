#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char* check(char* word)
{
	int i = 0;
	for (i; word[i] != '\0' ; i++)
	{
		if (word[i] < 'A' || word[i]>'z')
		{
			word[i] = ' ';
			continue;
		}
		if (word[i] < 'a' && word[i] > 'Z')
		{
			word[i] = ' ';
		}
	}
	return word;
}

int main()
{
	FILE* text = fopen("text.txt", "r");
	char arr[10000];
	fgets(arr, 1000, text);
	check(arr);
	char word[1000];
	int i = 0, j = 0;
	for (i ; arr[i] != '\0' ; i++)
	{
		if (arr[i] != ' ') {
			word[j] = arr[i];
			j++;
		}
		else {
			int k;
			for (k = 0; k < j; k++) {
				if (word[k] != word[j - 1 - k]) {
					break;
				}
			}
			if (k == j) {
				for (k = 0; k < j; k++) {
					printf("%c", word[k]);
				}
				printf("\n");
			}
			j = 0;
		}
	}
	getchar();
}