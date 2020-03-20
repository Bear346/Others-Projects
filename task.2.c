#define N 10000
#include<stdio.h>
typedef unsigned long long ull;
ull Fibonacchi(int buf[], const ull max_size);
int main()
{
	int buf[N];

	const ull variable_01 = 4000;
	printf("Numbers of Fibonacchi below 4 millions!\n");
	ull result = Fibonacchi(buf, variable_01);
	printf("Sum of divided numbers Fibonacchi =%llu", result);
	return 0;
}

ull Fibonacchi(int buf[],const ull max_size)
{

	int i = 1, j =i+1;
	int result = 0;
	int count = 0, sum = 0, value = 0;
	printf("% d\n% d\n", i, j);
	sum = i + j;
	i = sum;
	printf("% d\n", i);
	int k;
	while (1)
	{
			sum = i + j; //begin frim five
			j = i;
			i = sum;
		if ((sum % 2) == 0)
		{
			result = sum;
			count += result;
			result = 0;
		}
			for (k = 0; k < max_size;)
				buf[k++] = sum;
			for (k = 0; k < 1; k++)
				printf("% d", buf[k]);
			putchar('\n');
			if (count >=4000000)
				break;
	}
	count = count + 2;//as we were missing at the end number 2
	return count;
}
