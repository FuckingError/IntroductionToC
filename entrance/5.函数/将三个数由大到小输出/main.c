#include <stdio.h>
#include <stdlib.h>
/*
ʱ�䣺2017��1��3��12:44:40
Ŀ�ģ������Լ��᲻���ã�������ֿ��Ը��Ƴ��򣬲���Ҫ������Ƕ��
*/
int main()
{
    void swap(int *q1, int *q2);
    int a, b, c;
    int *p1, *p2, *p3;

    printf("Please input three integer numbers:\n");
    scanf("%d,%d,%d",&a,&b,&c);

    p1 = &a;
    p2 = &b;
    p3 = &c;

    if(a < b) swap(p1, p2);
    if(a < c) swap(p1, p3);
    if(b < c) swap(p2, p3);


    printf("%d %d %d\n",a,b,c);

    return 0;
}
    void swap(int *q1, int *q2)
    {
        int temp;
        temp = *q1;
        *q1 = *q2;
        *q2 = temp;
    }
