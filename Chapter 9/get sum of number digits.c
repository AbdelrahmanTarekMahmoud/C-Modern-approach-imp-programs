#include <stdio.h>
int sum(int n)
{
	int total = 0;
	while (n > 0)
	{
		total += n % 10;
		n /= 10;
	}
	return total;
}
int main(void)
{
	int s = sum(332);
	printf("%d", s);

}
