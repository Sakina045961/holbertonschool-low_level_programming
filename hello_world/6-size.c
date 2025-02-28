#include <stdio.h>

/**
<<<<<<< HEAD
 * main - Prints the size of various types on
 * thecomputeritis compiled and run on
=======
 * main - Entry point
 *
>>>>>>> 7a15d5ddc6d87f98aeaac2809e1bf2c74a0ce2ed
 * Return: Always 0 (Success)
 */
int main(void)
{
<<<<<<< HEAD
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
=======
    printf("Size of a char: %ld byte(s)\n", sizeof(char));
    printf("Size of an int: %ld byte(s)\n", sizeof(int));
    printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
    printf("Size of a float: %ld byte(s)\n", sizeof(float));

    return (0);
>>>>>>> 7a15d5ddc6d87f98aeaac2809e1bf2c74a0ce2ed
}

