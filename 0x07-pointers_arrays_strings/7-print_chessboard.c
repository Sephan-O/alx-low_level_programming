/* #include "main.h" */
#include <stdio.h>
#include <string.h>

/**
 * print_chessboard - A function that prints the chessboard
 * @a: array of chess pieces to print
 * Return: returns void
 */
void print_chessboard(char (*a)[8])
{
char i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
printf("%c ", a[i][j]);
}
printf("\n");
}
}
/* int main(void) */
/* { */
/*     char board[8][8] = { */
/*         {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'}, */
/*         {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'}, */
/*         {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, */
/*         {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, */
/*         {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, */
/*         {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, */
/*         {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'}, */
/*         {'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'}, */
/*     }; */
/*     print_chessboard(board); */
/*     return (0); */
/* } */
