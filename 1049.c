#include<stdio.h>
int main(void)
{
	int string, brand;
	int set_tmp, sol_tmp;
	int set_min =1000, sol_min = 1000;
	int cost = 0;
	scanf("%d %d", &string, &brand);

	for (int i = 0; i < brand; i++)
	{
		scanf("%d %d", &set_tmp, &sol_tmp);
		if (set_tmp < set_min)
			set_min = set_tmp;
		if (sol_tmp < sol_min)
			sol_min = sol_tmp;
	}

	while (string > 0)
	{
		if (string > 6)
		{
			if (set_min > sol_min * 6)
			{
				cost += sol_min * 6;
				string -= 6;
			}

			if (set_min <= sol_min * 6)
			{
				cost += set_min;
				string -= 6;
			}
		}

		else
		{
			if (set_min > sol_min* string)
			{
				cost += sol_min * string;
				string = 0;
			}

			if (set_min <= sol_min * string)
			{
				cost += set_min;
				string = 0;
			}
		}
	}

	printf("%d", cost);
	return 0;
}