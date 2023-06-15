#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("Size of a char:%ull byte(s)", sizeof(char));
    printf("Size of an int: %ull byte(s)", sizeof(int));
    printf("Size of a long int: %ull byte(s)", sizeof(long int));
    printf("Size of a long long int: %ull byte(s)", sizeof(long long int));
    printf("Size of a float: %ull byte(s)", sizeof(float));
    return (0);
}
