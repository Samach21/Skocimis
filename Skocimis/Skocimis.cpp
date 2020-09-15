#include<stdio.h>

int process(int, int);

int main()
{
	int x[3];
	int* n = x;
	int dis[2];
	int* m = dis;
	for (int i = 0; i < 3; i++)
	{
		if (scanf_s("%d", &x[i]) != 1)
		{
			printf("ERROR");
			return 1;
		}
		else if (x[i] < 0 || x[i] > 100)
		{
			printf("ERROR");
			return 1;
		}
		if (i > 0 && x[i] < x[i - 1])
		{
			printf("ERROR");
			return 1;
		}
	}
	for (int i = 0; i < 2; i++)
	{
		dis[i] = process(*(n + i), *(n + i + 1));
	}
	if (*m <= *(m + 1))
	{
		printf("%d", *(m + 1));
	}
	else
	{
		printf("%d", *m);
	}
	return 0;
}

int process(int a, int b)
{
	return b - a - 1;
}