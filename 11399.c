#include<stdio.h>
#include<stdlib.h>

void selectionsort(int* arr, int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		int min = arr[i];
		int min_index = i;
		int temp;
		for (int j = i + 1; j < SIZE; j++)
		{
			if (min > arr[j])
			{
				min = arr[j];
				min_index = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp;
	}
}

int min_time(int* arr, int SIZE)
{
	int sum = 0;
	int total = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum = sum + arr[i];
		total = total + sum;
	}

	return total;
}
int main(void)
{
	int SIZE;

	scanf("%d", &SIZE);
	int* arr = (int*)malloc(sizeof(int) * SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		int k = 0;
		scanf("%d", &k);
		arr[i] = k;
	}

	selectionsort(arr, SIZE);
	printf("%d", min_time(arr, SIZE));

	free(arr);

	return 0;

}