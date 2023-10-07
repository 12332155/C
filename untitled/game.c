

#include "game.h"

void initBoard(char board[ROW][COL],int x,int y){
    for (int i = 0; i < ROW; ++i)
    {
        for (int j = 0; j < COL; ++j)
        {
            board[i][j] = ' ';
        }
    }
}


void DispalyBoardBoard(char board[ROW][COL],int x,int y){
    for (int i = 0; i < x; ++i) {
        //打印列
        for (int j = 0; j < y; ++j) {
            printf(" %c ",board[i][j]);// a | d | c
            if  (j < COL-1)
                printf("|");
        }
        printf("\n");
        //打印列分割线--------------------------------------
        for (int j = 0; j < y; ++j) {
            if(i<ROW -1)
            printf("---");
            if  (j < COL-1)
                printf(" ");
        }
        printf("\n");





    }


};

// 玩家下棋
void PlayMove(char board[ROW][COL],int row,int col)
{
    while(1){
        printf("玩家请输入\n");
        int x = 0;
        int y = 0;
        scanf("%d %d",&x,&y);
        //坐标合法判断
        if(0<x && x <= row && 0<y && y <= col){
            if(board[x-1][y-1] == ' '){
                board[x-1][y-1]='*';
                break;
            } else{
                printf("请选着其他位置\n");
            }
        } else{
            printf("超出范围\n");
        }
    }



}
//电脑下棋
void ComputerMove(char board[ROW][COL],int row,int col)
{
    while(1){
        //生成随机坐标
        int x = rand()%row;
        int y = rand()%col;
        if(board[x][y] == ' '){
            board[x][y]='#';
            break;
        }
    }



}
//判断游戏状态

char IsWin(char board[ROW][COL],int row,int col){


    char  win = ' ';
    int empty = 0;
    char symbol=0;
    //判断行有没有相等
    for (int i = 0; i < row; ++i)
    {
        int x= 0;
        for (int j = 0; j < col-1; ++j)
        {
            if((board[i][j] == board[i][j+1]) &&( board[i][j+1] !=' '))
            {
                x++;
                if(x == col-1){
                    win = board[i][j];
                }
            }
        }

    }
    //判断列有没有相等
    for (int i = 0; i < col; ++i)
    {
        int y =0;
        for (int j = 0; j < row-1; ++j)
        {
            if((board[j][i] == board[j+1][i]) &&( board[i][j+1] !=' '))
            {
                y++;
                if(y==row-1){
                    win = board[i][j];
                }
            }
        }

    }
    //判断谁获胜
    switch (win) {
        case '*':
            return '*';
            break;
        case '#':
            return '#';
            break;
    }
    //判断是否全部填满
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            if(board[i][j] !=' '){
                empty++;
                //全部检索
                if(empty==col*row){
                    return 'Q';
                }

            }
        }
    }
    return 'C';






}
