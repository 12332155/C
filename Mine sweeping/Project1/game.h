#define _CRT_SECURE_NO_WARNINGS
#pragma once

#include <stdio.h>



#define ROW 8
#define COL 8
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10

//地图初始化
void InitBoard(char show[ROWS][COLS], int row, int col, char set);
//地图打印
void print(char show[ROWS][COLS], int row, int col);

//布置雷
void SetMine(char mine[ROW][COL], int row, int col, int sum);

//玩家输入
int  FindMine(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col);