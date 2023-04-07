#define ROW 3
#define COL 3

#include <stdlib.h>
#include <time.h>
 
//츠
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);


//愷蘆榴檄
//鯤소端	’*‘
//든켬端	’#‘
//틱애		’Q‘
//셨崎		’C‘
char IsWin(char board[ROW][COL], int row, int col);

int IsFull(char board[ROW][COL], int row, int col);
