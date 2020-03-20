#include<stdio.h>
#include<string.h>
#include<locale.h>
#define M 256

int WordCount(char* buf);

int main()
{
	setlocale(LC_ALL, "Russian");
	char buf[M] = { 0 };
	int result = 0;
	printf("Enter the string!\n");
	fgets(buf, M, stdin);
	if (buf[strlen(buf) - 1] == '\0')
		buf[strlen(buf) - 1] = 0;
	result = WordCount(buf);
	printf("Количество слов в строке %d", result);
	return 0;
}

int WordCount(char* buf)
{
	int count = 0, result = 0,flag = 0;
	int size = strlen(buf);
	int i,j,k;
	for (i = 0; i < size; i++)
	{
		if (buf[i] != ' ' && buf[i + 1] != ' ' && flag == 0)
		{
			flag = 1;
			count++;
		}
	}
	for(j = 0; j< size; j++)
	{
		if (buf[j] == ' ' && buf[j + 1] != ' ' && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if (buf[j] != ' ' && buf[j + 1] != ' ' && flag == 1)
		{
			flag = 0;
		}
	}
	for (k = 0; k < size; k++)
	{
		if (buf[k] != ' ' && buf[k + 1] != ' ' && flag == 0)
		{
			flag = 1;
			count++;
		}
		if (buf[k] == '\0' || buf[k + 1] == '\n' || flag ==1)
		{
			flag = 0;
			count--;
		}
	}
	return count;
}
