#include <stdio.h>
#include <stdlib.h>
/*
2017��1��3��07:22:42
*/
int main()
{
    void swap(int *p1, int *p2);

    int a, b;
    int * pointer_1, * pointer_2;

    printf("please input two different integer numbers:\n");
    scanf("%d,%d",&a,&b);

    pointer_1 = &a;
    pointer_2 = &b;

    if (a<b) swap(pointer_1, pointer_2);

    printf("a = %d,b = %d\n",a,b);
    return 0;
}

    void swap(int *p1, int *p2)
    {
     int temp;
     temp = * p1;
     *p1 = *p2;
     *p2 = temp;
    }
/*
��˼��1.���������ĺ�������Ҫ�зֺţ�������������Ҫ
      2.���������������ڴ������ڣ���������ֻ�к���������������ڣ������β��ڴ�������
*/
