#include <stdio.h>
#include <string.h>

/**
 * *_strncpy - a function that copies a string from src to dest
 * @dest: destinantion where the string is copied.
 * @src: source from which the string is copied.
 * @n: The number of characters to be copied from source.
 * Return: Returns a copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}
