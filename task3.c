//Find the biggest multiple for 600851475143

#include<stdio.h>
#include<locale.h>
#define N 1000

typedef unsigned long long ull;
ull num_enter(ull max);
char *easy_num(int *buf, ull max, int max1);

int main()
{
	setlocale(LC_ALL, "Russian");
	int buf[N] = { 0 };
	ull max =800000000000;
	ull result = 0;
	result = num_enter(max);
	const int max2 = 10;
	printf("Number = %llu\n", result);
	easy_num(buf, result,max2);
	return 0;
}
ull num_enter(ull max)
{
	printf("Enter the number!\n");
	ull number ;
		scanf("%llu", &number);
		if (number > max || number < 0)
			return -1;
	return number;
}
char *easy_num(int *buf, ull max,int max1)
{
	ull result = 1;
	ull value = 0; int i, j = 0;
	for (i = 2; result!= max; i++)
	{
	   value = i;
	   if (max % value == 0)
	   {
		   result *= value;
	   }
		for (j = 0; j < max1;)
		buf[j++] = value;
		if (max % value != 0)
			continue;
		for (j = 0; j < 1; j++)
			printf("%d\n", buf[j]);	
		
	}
	printf("Самый большой делитель :  %d\n", buf[j]);
	return buf;
}
