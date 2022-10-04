#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	int n;
	scanf("%d", &n);
  	// Complete the code to print the pattern.
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < (2 * n) - 1; j++)
		{
			if (j < i)
				printf("%d ", n - j);
			else if (j >= (2 * n) - 1 - i)
				printf("%d ", j - (n - 2));
			else
				printf("%d ", n - i);
		}
		printf("\n");
	}
	for (int i = n; i < (2 * n) - 1; i++)
	{
		for (int j = 0; j < (2 * n) - 1; j++)
		{
			if (j < ((2 * n) - 2 - i))
				printf("%d ", n - j);
			else if (j >= i + 1)
				printf("%d ", j - (n - 2));
			else
				printf("%d ", n - ((2 * n) - 2 - i));
		}
		printf("\n");
	}
	return 0;
}