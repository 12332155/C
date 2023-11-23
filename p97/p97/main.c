#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	/*int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9 };

	for ( i = 0; i < 12; i++)
	{
		arr[i] = 0;
		printf("hehe\n");
	}*/



	long int a = 11;
	int* p = &a;
	printf("%p\n", &a);
	printf("%p", p);
	return 0;



}