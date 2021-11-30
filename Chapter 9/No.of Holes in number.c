#include <stdio.h>
int No_Holes(int n)
{
	int holes = 0, a[501], steps = 0;
	for (int i = 0;i <= n;i++)
	{
		a[i] = n % 10;
		n = n / 10;
		steps++;
	}
	
	for (int i = 0; i < steps; i++)
	{
		if (a[i] == 8)
		{
			holes = holes + 2;
		}
		else if (a[i] == 0 || a[i] == 4 || a[i] == 6 || a[i] == 9)
		{
			holes++;
		}
		else
		{
			holes = 0;
		}
	}
	
	return holes;
}

int main()
{
	int z=0;
	printf("Please Enter a number  : ", z);
	scanf_s("%d", &z);
	printf("Number of holes in %d is : %d", z,No_Holes(z));
}
