#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print2(int(*p)[5], int r, int c) {
	int i = 0;
	for ( i = 0; i < r; i++)
	{
		for (int  j = 0; j < c; j++)
		{
			//printf("%d", p[i][j]);
			printf("%d", *(*(p+i)+j));
		}
		printf("\n");
	}
}
int main() {





	int arr[3][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};
	int arr2[5] = {1,2,3,4,5};
	Print2(arr, 3, 5);

	/*printf("%d", *arr2);
	printf("%d", **arr);*/
	return 0;


}