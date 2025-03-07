#include <stdio.h>
int main(void)
{
	int a, b;

	printf("Write 2 numbers for multiplication\n");
	scanf("%d %d", &a, &b);
	printf("Multiplication of %d and %d is %d\n", a, b, (a * b));
	return (0);
}
