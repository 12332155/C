
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	
	/*char ch = 'w';
	char* pc = &ch;
	*pc = 'b';
	printf("%c", ch);
	printf("123");
	const char* p = "abcd";//付给p的是首字符‘a’的地址
	//这是一个常量字符串不能被修改会报错
	//*p = 'd';
	printf("%s", p);//printf遇到‘\0’停止打印*/

	//const char* p = "abcd";
	//const char* p1 = "abcd";
	////p== p1
	////常量在内存中只有一个地址

	//char arr1[] = "abcdef";
	//char arr2[] = "abcdef";
	////arr1 != arr2

	//int arr[10];//整形数组
	//char ch[5];//字符数组

	////指针数组
	//int* arr2[6];// 存放整型指针的数组
	//char* arr3[5];// 存放字符指针的数组 

	int* p1[10];//指针数组
	int(*p)[10];//数组指针

	int arr[20] = { 0 };
	//数组名通常表示的都是数组首元素的地址
	//但是有两个意外
	//sizeof(数组名) 这里的数组名表示整个数组，计算的整个数组的大小
	//&数组名，这里的数组名表示的是整个数组，所以&取出的是整个数组的地址
	printf("%p ", arr+1);//加4个字节
	printf("%p ", arr[0]+1);//加4个字节
	printf("%p ", &arr+1);//加40 个字节


	return 0;
}

