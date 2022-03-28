#include <stdio.h>
#include <string.h>

/**
 * *_memset - this function fills the memory with constant byte
 * @s:This is a pointer to the block of memory to fill.
 * @b:This is the value to be set. The value is passed as a char.
 * @n:This is the number of bytes to be set to the value.
 * Return: Returns a character.
 */
char *_memset(char *s, char b, unsigned int n)
{
memset(s,b,n);
return (s);
}
/* void simple_print_buffer(char *buffer, unsigned int size) */
/* { */
/*         unsigned int i; */

/*         i = 0; */
/*         while (i < size) */
/*         { */
/*                 if (i % 10) */
/*                 { */
/*                         printf(" "); */
/*                 } */
/*                 if (!(i % 10) && i) */
/*                 { */
/*                         printf("\n"); */
/*                 } */
/*                 printf("0x%02x", buffer[i]); */
/*                 i++; */
/*         } */
/*         printf("\n"); */
/* } */

/* /\** */
/*  * main - check the code */
/*  * */
/*  * Return: Always 0. */
/*  *\/ */
/* int main(void) */
/* { */
/*     char buffer[98] = {0x00}; */

/*     simple_print_buffer(buffer, 98); */
/*     _memset(buffer, 0x01, 95); */
/*     printf("-------------------------------------------------\n"); */
/*     simple_print_buffer(buffer, 98);     */
/*     return (0); */
/* } */
