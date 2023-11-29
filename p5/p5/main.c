#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

    //int a=0, b =0;
    //while (printf("输入："),scanf("%d %d", &a, &b) != EOF) { // 注意 while 处理多个 case
    //    if (a == b)
    //    {
    //        printf("输出：%d = %d", a, b);
    //    }
    //    if (a > b)
    //    {
    //        printf("输出：%d>%d", a, b);
    //    }
    //    if (a < b)
    //    {
    //        printf("输出：%d<%d", a, b);
    //    }
    /*int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int cmp = 0;
    if (a < b)
    {
        cmp = a;
        a = b;
        b = cmp;
    }
    if (a < c)
    {
        cmp = a;
        a = c;
        c = cmp;
    }
    if (b < c)
    {
        cmp = b;
        b = c;
        c = cmp;
    }
    printf("%d %d %d", a, b, c);*/
    /*double dou = 0.0;
    for (int i = 1; i < 101; i++)
    {
        if (1%2 == 0)
        {
            dou -= 1.0 / i;
        }
        else {
            dou += 1.0 / i;

        }
    }
    printf("%f", dou);*/
    /*int sum = 0;
    for (int i = 1; i < 101; i++)
    {
        if (i % 10 == 9) {
            sum++;
            printf("%d  ",i);
        }
        if (i/10 == 9)
        {
            printf("%d  ", i);

            sum++;
        }

    }
    printf("\n%d", sum);*/
    /*for (int i = 1000; i < 2001; i++)
    {
        if (i % 4 == 0 && i % 100 != 0|| i % 400 ==0)
        {
            printf("%d ", i);
        }
    }*/

    /*int arr[10] = { 5,6,8,45,6,13,8,23,5,4 };
    int max = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%d", max);*/

    int arr[1] = {0};
    scanf("%d", arr);

	return 0;
}