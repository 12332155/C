#define  _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>

void play() {
	

	//根据输入的值返回是大了还是小了  输入机会为5次
	//生成随机数
	srand((unsigned int)time(NULL));
	int sr = rand()%10+1;
	int sum = 0;
	int opportunity = 5;
	

	while (opportunity)
	{
		printf("你选中的数字是：\n");
		scanf("%d", &sum);
		if (sum > sr) {
			printf("大了\n");
		}
		else if (sum < sr)
		{
			printf("小了\n");
		}
		else
		{
			printf("猜中了\n");
			return NULL;
		}

		opportunity--;
	}
	printf("游戏失败 随机数是：%d", sr);
}
int main() {
	//选着模式1：进入游戏 0：退出游戏  其他：选着错误
	/*while (1)
	{
		int select = 1;
		printf("***********************************\n");
		printf("      1：进入游戏 0：退出游戏      \n");
		printf("***********************************\n");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			printf("进入游戏\n");
			play();
			break;
		case 0:
			printf("已推出游戏\n");
			goto end;
			break;
		default:
			printf("输入格式错误\n");

			break;
		}
	}
end:*/
	//九九乘法表
	/*for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < i+1; j++)
		{
			printf("%d * %d = %d ", i, j, i * j);
		}
		printf("\n");
	}*/
	/*int a, b;
	printf("输入：");
	scanf("%d %d", &a, &b);
	int c = a % b;

	while (c)
	{
		a = b;
		b = c;
	}
	printf("\n%d", b);*/
	
	
	for (int i = 100; i < 201; i++)
	{
		int bol = 0;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				bol++;
				break;
			}
		}
		if (bol == 0)
		{
			printf("%d ", i);
		}
	}
	


	return 0;
}