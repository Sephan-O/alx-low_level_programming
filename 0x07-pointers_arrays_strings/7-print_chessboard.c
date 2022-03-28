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
printf("%s\n", *a);
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
