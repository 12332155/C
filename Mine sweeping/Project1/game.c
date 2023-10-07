
#include "game.h"

//地图初始化
void InitBoard(char show[ROWS][COLS],int row,int col,char set) {

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			show[i][j] = set;
		}
	}

}

//地图打印
void print(char show[ROWS][COLS], int row, int col) {
	//打印列标
	for (int i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
		printf("\n");
	for (int i = 1; i <= row; i++)
	{
		//打印行标
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", show[i][j]);
			//printf("(%d %d )" , i, j);
		}
		printf("\n");
	}
}

//布置雷
void SetMine(char mine[ROWS][COLS],int row,int col,int sum) {

	int count = 0;
	while (count < sum)
	{
		int x = (rand(NULL) % row) + 1;
		int y = (rand(NULL) % col) + 1;
		if (mine[x][y] == '0' && mine[x][y] != '*')
		{
			mine[x][y] = '*';
			//printf("%d %d\n", x, y);
			count++;
		}
		
	} 


}

//扩展查找
void extend(char show[ROWS][COLS], char mine[ROWS][COLS], int x, int y) {
	int total = 0;
	//寻找周围的雷
	if (x>0 && x<= ROW && y > 0 && y <= COL)
	{
		for (int i = x - 1; i <= x + 1; i++)
		{
			for (int j = y - 1; j <= y + 1; j++)
			{
				if (i == x && j == y)
				{
					continue;
				}
				else if (mine[i][j] == '*' && mine[i][j] != '0')
				{
					total++;
				}

			}
		}
		if (total == 0)
		{
			show[x][y] = '0';

			for (int i = x - 1; i <= x + 1; i++)
			{
				for (int j = y - 1; j <= y + 1; j++)
				{
					if (show[i][j] == '#')
					{
						extend(show, mine, i, j);
					}

				}
			}
		}
		else
		{
			show[x][y] = total + '0';
		}
	}
	
}

//查找坐标周围的值
int Find_Around(char show[ROWS][COLS], char mine[ROWS][COLS], int x, int y){

	int total = 0;
	for (int i = x - 1; i <= x+1; i++)
	{
		for (int  j = y-1; j <= y+1; j++)
		{
			if (mine[i][j] == '*')
			{
				total++;
			}
			
		}
	}
	//如果周围一个雷都没有将他全部翻开
	/*if (total == 0);
	{
		for (int i = x + 1; i <= x + 1; i++)
		{
			for (int j = y - 1; j <= y - 1; j++)
			{
				(mine[i][y] == '0');
			}
		}
	}*/
	return total;

}

//玩家输入
int  FindMine(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col) {

	while (1)
	{
		int x = 0;
		int y = 0;
		printf("请输入你的坐标\n");
		scanf_s("%d %d", &x, &y);
		if (0 < x && x <= ROW && 0 < y && y <= COL && show[x][y] == '#')
		{
			if (mine[x][y]== '*')
			{
				printf("很遗憾你踩到雷了\n");
				print(mine, ROW, COL);//打印所有的雷
				return 0;//结束游戏
				break;
			}
			else//查找周围坐标的数值
			{
				extend(show, mine, x, y);
				int margin = 0;
				for (int i = 1; i <= row; i++)
				{
					for (int j = 0; j <= col; j++)
					{
						if (show[i][y] != '#') {
							margin++;
						}
					}
				}
				if (margin == EASY_COUNT)
				{
					printf("成功\n");
					print(mine, ROW, COL);
					return 0;//结束游戏
				}
			}
		
			break;
		}
		else
		{
			printf("非法坐标");
		}
	}
}



