#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>


void reverse(char *left ,char* right) {

	assert(left	);
	assert(right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;

		left++;
		right--;
	}
}
void reverseWord(char* start, char * end) {
	while (*end != '\0')
	{
		while (*end != ' '&& *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end == '\0')
		{
			break;
		}
		end++;
		start = end;
	}
	
}
int main() {
	//ÄæÐò I like BeiJing.
	char arr[100] = {0};
	gets(arr);
	int len = strlen(arr);

	reverse(arr, arr + len - 1);//ÄæÐòÕû¸ö×Ö·û´®
	printf("%s\n", arr);

	char* start = arr;
	char* end = start;
	reverseWord(arr, arr);//lÄæÐòµ¥´Ê
	printf("%s", arr);
	


	
	/*printf("%p\n", start);
	printf("%p", arr);*/

}
 