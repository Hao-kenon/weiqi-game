#define ROW 5
#define COL 5

#include <stdlib.h>
#include <time.h>
 
//声明
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);


//四种状态
//玩家赢	’*‘
//电脑赢	’#‘
//平局		’Q‘
//继续		’C‘
char IsWin(char board[ROW][COL], int row, int col);

int IsFull(char board[ROW][COL], int row, int col);