#define _CRT_SECURE_NO_WARNINGS

#include  <stdio.h>
typedef void(*pf_t)(int);//把void(* )(int )类型重命名为pf_t



int test(const char* str) {
	printf("text()");
	return 0;
}
void calc(int  (*pf_t)(int,int)) {
	int x = 0;
	int y = 0;
	int ret = 0;
	ret = pf_t(x, y);
	printf("%d", ret);
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
void menu() {
	printf("********************************\n");
	printf("******  1.add     2. sub  ******\n");
	printf("******  0.exit            ******\n");
	printf("*******************************\n");

}
int main() {

	//int (*pf)(const char*) = test;
	//pf("sdf");
	//(*pf)("sfdasfd");//*解应用可以省略

	//(*(void(*)())0)();
	//void(  * signal(int, void(*)(int))   )(int);
	/*int input = 0;
	do
	{
		menu();
		printf("请选择");
		scanf("%d", &input);



	} while (input);*/

	//int (*pf)(int, int) = Add;
	//int (*arr[4])(int, int) = { Add,Sub,Mul,div };//这是一个函数指针的数组
	//for (int i = 0; i < 3; i++)
	//{
	//	int ret = arr[i](8, 5);
	//}


	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int z = sizeof(arr) / sizeof(arr[0]);
	bubble_sort 


	return 0;
}