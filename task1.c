#include<stdio.h>
#include<ctype.h>
#define N 1000 

int sum_of_numbers(int buf[],int num,int max_size);
void print_of_sum_numbers(int buf[],int n,int max_size); 
int enter_of_numbers(int x); 

int main()
{
	int result1 = 0;
	int buf[N];
	while (1)
	{
		result1 = enter_of_numbers(10000);
		if (result1 == -1)
		{
			break;
		}
		int sum = sum_of_numbers(buf,result1,N);
		print_of_sum_numbers(buf,sum,N);
	}
	printf("You are exit from programm!\n");
	return 0;
}
int enter_of_numbers(int max_size)
{
	int num = 0;
	while (1)
	{
		puts("Enter the number and then press Q and press enter!\n");
		puts("For the exit press Q or any word!");
		scanf("%d", &num);
		while (getchar() != '\n')
		{
			if (!isalnum(num))
				return -1;
			else
			    continue;
		}
		 if (num <= 0 || num >= max_size)
		{
			puts("The number below zero!or limit is 10000 ");
			continue;
		}
		 else
		      return num;
	}
	return 0;
}
void print_of_sum_numbers (int buf[],int n,int max_size)
{
	
	printf("Summ of all numbers is = %d", n);
	putchar('\n');
}

int sum_of_numbers(int buf[],int num,int max_size)
{
	int  total = 0, value = 0,i = 0,flag = 0 ;
	int special_variable = num-1;
	int count = special_variable;
    while(special_variable > 0)
	{
		if ((special_variable % 3 == 0) || (special_variable % 5 == 0))
		{
			value = special_variable;
			for (i = 0; i < num;)
			buf[i++] = value;
			total += value;
			flag = value;
		}
		for (int i = 0; i < 1; i++)
			if (flag == value)
			{
				printf("%02d", buf[i]);
				putchar('\n');
			}
		special_variable--;
		value = 0;
	}
	return total;
}
