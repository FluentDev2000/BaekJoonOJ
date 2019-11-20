#include<stdio.h>
int change(int price, int* Money)
{
	int count = 0;
	for (int i = 0; i < 6; i++)
	{
		if ((price / Money[i]) != 0)
		{
			count = count + (price / Money[i]);
			price = price - ((price / Money[i]) * Money[i]);
		}
	}
	return count;

}
int main(void)
{
	int Money[6] = { 500, 100, 50, 10, 5, 1 };
	int price;
	int rest;
	int result = 0;

	scanf("%d", &price);
	rest = 1000 - price;

	printf("%d", change(rest, Money));

	return 0;
}