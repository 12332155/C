
#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <search.h>
void  mysort(void * start,int number,int width,int (* wpd)(void *el1,void* el2)) {

	//函数循环次数   

	//自定义函数el1>el2 返回值大于0 否则返回值小于0

	//返回值大于0交换 el1 和 el2

}
int cmp_int(const void * e1,const void * e2) {
	//e1<e2 返回值小于零
	//e1 == e2  返回零
	//e1 > e2 返回大于零的数值
	return *(int *)e1 - *(int *)e2;
}
int main()   
{
	//重写一个qsort函数
	//元素的起始位置 ，元素的个数，元素的宽度单位是比特，返回值为int类型的函数有两个任意类型的参数
	
	int arr[] = { 3,5,6,8,4,65,23 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	printf("fjsf");


	return 0;
}