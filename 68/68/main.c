#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printX(int x, int y) {
	for (int i = 0; i < x; i++)
	{
		for (int  j = 0; j < y; j++)
		{
			if (i == j || i + j == x -1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
int main() {
	int x = 0;
	int y = 0;
	scanf("%d %d", &x, &y);
	printX(x, y);
	
	
	return 0;

}