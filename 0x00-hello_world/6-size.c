#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int intType;
long int longIntType;
long long int llIntType;
float floatType;
char charType;
printf("Size of a char: %zu byte\n", sizeof(charType));
printf("Size of an int: %zu bytes\n", sizeof(intType));
printf("Size of a long int: %zu bytes\n", sizeof(longIntType));
printf("Size of a long long int: %zu bytes\n", sizeof(llIntType));
printf("Size of a  float: %zu bytes\n", sizeof(floatType));
return (0);
}
