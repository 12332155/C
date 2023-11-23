#define _CRT_SECURE_NO_WARNINGS //以免函数库不能正常调用
#include <assert.h>
#include <stdio.h>
#include <math.h>

int my_strlen(const char * str) {


	int count = 0;
	assert(str);//判断是否位空指针
	while (*str != '\0')
	{                              
		str++;
		count++;

	}
	return count;
}

//判断是是不是三角形是什么三角形

int main() {

	//求出0~10000 之间的水仙花数
	int i = 0;
	for (int i = 0; i < 10000; i++)
	{
		//判断是几位数
		int n = 1;
		int sum = 0;
		int tmp = i;
		while (tmp / 10)
		{
			n++;
			tmp /= 10;

		}
		//printf("%d", n);
		//printf("\n");
		//得到他的每一位
		tmp = i;
		
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp /= 10;
		}
		if (sum == i)
		{
			printf("o%d ", i);
		}
	}
	printf("%d", pow(2, 2));
	/*int a = 0;
	int b = 0;
	int c = 0;
	while (scanf("%d %d %d",&a ,&b ,&c))
	{
		if (a + b > c && a + c > b && b + c > a)
		{
			if (a == b && b == c)
			{
				printf("等边三角形");

			}
			else if (a == b || b == c || c == a)
			{
				printf("等腰三角形");

			}
			else 
			{
				printf("普通三角形");

			}
		}

	}*/
	

	
	return 0;
}
