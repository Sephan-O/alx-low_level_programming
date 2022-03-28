#include <stdio.h>
#include <string.h>

/**
 * *_memcpy - copies n characters from memory area src to memory area dest.
 * @dest: pointer to the destination array where the content is to be copied
 * @src: pointer to the source of data to be copied
 * @n: number of bytes to be copied.
 * Return: returns a charcter
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);
return (dest);
}
/* void simple_print_buffer(char *buffer, unsigned int size) */
/* { */
/*     unsigned int i; */

/*     i = 0; */
/*     while (i < size) */
/*     { */
/*         if (i % 10) */
/*         { */
/*             printf(" "); */
/*         } */
/*         if (!(i % 10) && i) */
/*         { */
/*             printf("\n"); */
/*         } */
/*         printf("0x%02x", buffer[i]); */
/*         i++; */
/*     } */
/*     printf("\n"); */
/* } */

/* /\** */
/*  * main - check the code */
/*  * */
/*  * Return: Always 0. */
/*  *\/ */
/* int main(void) */
/* { */
/*     char buffer[98] = {0}; */
/*     char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14}; */

/*     simple_print_buffer(buffer, 98); */
/*     _memcpy(buffer + 50, buffer2, 10); */
/*     printf("-------------------------------------------------\n"); */
/*     simple_print_buffer(buffer, 98);     */
/*     return (0); */
/* } */
