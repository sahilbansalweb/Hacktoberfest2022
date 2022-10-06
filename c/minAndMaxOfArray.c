#include<stdio.h>
int main()
{
	int i, j, size, temp;
	int a[100];
	scanf("%d", &size);
	for (i = 0; i < size; i++)
		scanf("%d", &a[i]);

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < size; i++)
		printf("%d\t", a[i]);
	//printf("%d\t", a[0]);
	//printf("%d", a[size-1]);
}
