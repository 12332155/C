//
// Created by 222 on 2023/10/4.
//



#ifndef UNTITLED_GAME_H
#define UNTITLED_GAME_H
#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
//数组初始化
void initBoard(char board[ROW][COL],int  x,int y);
//打印棋盘
void DispalyBoardBoard(char board[ROW][COL],int x,int y);
//玩家下棋
void PlayMove(char board[ROW][COL],int row,int col);
//电脑下棋
void ComputerMove(char board[ROW][COL],int row,int col);
//玩家赢了 ‘*’
//电脑赢了“#”
//平局‘Q’
//继续‘C’
char IsWin(char board[ROW][COL],int row,int col);

#endif //UNTITLED_GAME_H
