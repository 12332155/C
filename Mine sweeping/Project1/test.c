#include "game.h"



//选着菜单
void menu()
{
	printf("-----------------------------\n");
	printf("------------扫雷-------------\n");
	printf("------开始：1----推出：0------\n");
}
//进入游戏
void  game() {
	srand((unsigned int)time(NULL));

	char mine[ROWS][COLS] = {0};
	char show[ROWS][COLS] = {0};
	
	//地图初始化
	InitBoard(mine, ROW, COL, '0');
	InitBoard(show, ROW, COL, '#');
	//布置雷
	SetMine(mine,ROW,COL, EASY_COUNT);
	//打印地图
	print(show, ROW, COL);
	printf("\n");
	int enable = 1;//正式进入游戏循环
	while (enable)
	{
		print(mine, ROW, COL);
		//玩家输入
		enable = FindMine(show, mine, ROW, COL);
	}
	
}

int main() {
	int Options = 1;

	do 
	{
		menu();
		printf("请选着> ");
		scanf("%d", &Options);
		switch (Options)
		{
		case 1:
			//进入游戏
			printf("游戏开始\n");
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("选着错误\n");
			break;
		}
	} while (Options);
		
	return 0;
} 