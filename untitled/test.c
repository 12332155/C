
#include <stdlib.h>
#include "game.h"
#include "time.h"
//
void man(){
    printf("------------------------------------------------------\n");
    printf("-------------------------play-------------------------\n");
    printf("------------------------------------------------------\n");
}
void game(){
    srand(time(NULL));//设置随机数起点

    char board[ROW][COL]={0};
    initBoard(board,ROW,COL);//初始化棋盘
    DispalyBoardBoard(board,ROW,COL);//打印棋盘
    //循环下棋
    while (1){
        PlayMove(board,ROW,COL);//玩家下棋
        DispalyBoardBoard(board,ROW,COL);//打印棋盘
        switch (IsWin(board,ROW,COL)) {
            case '*':
                printf("玩家获胜\n");
                return;
                break;
            case '#':
                printf("电脑获胜\n");
                return;
                break;
            case 'Q':
                printf("平局\n");
                return;
                break;
            case 'C':
                printf("继续\n");
                break;
        }

        ComputerMove(board,ROW,COL);
        DispalyBoardBoard(board,ROW,COL);//打印棋盘
        switch (IsWin(board,ROW,COL)) {
            case '*':
                printf("玩家获胜\n");
                return;
                break;
            case '#':
                printf("电脑获胜\n");
                return;
                break;
            case 'Q':
                printf("平局\n");
                return;
                break;
            case 'C':
                printf("继续\n");
                break;
        }


    }

}

int main(){
    int input = 1;

    do {
        man();//导航栏
        printf("请选择:> ");
        scanf("%d",&input);
        printf("\n");
        switch (input) {
            case 1:
                game();//进入游戏
                break;
            case 0:
                printf("推出游戏");
                break;
            default:
                printf("输入不合法");
        }
    } while (input);


    return  0;
}
