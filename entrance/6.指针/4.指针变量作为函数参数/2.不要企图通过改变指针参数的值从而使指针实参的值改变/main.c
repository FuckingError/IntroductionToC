#include <stdio.h>
#include <stdlib.h>
/*
ʱ�䣺2017��1��3��07:46:38
*/
int main()
{
    void swap(int *p1,int *p2);
    int a, b;
    int * pointer_1,* pointer_2;

    printf("Please input two different integer numbers:\n");
    scanf("%d,%d",&a,&b);

    pointer_1 = &a;
    pointer_2 = &b;

    if (a < b) swap(pointer_1,pointer_2);

    printf("max = %d,min = %d\n",a,b);

    return 0;
}
    void swap(int *p1,int *p2)
    {
        int *p;
        p = p1;
        p1 = p2;
        p2 = p;
    }
/*
��˼���ṹ��swap(int *p1,int *P2) ָ��ǰҪ������
      ���ԣ�C������ʵ�α������βα���֮������ݴ����ǵ����ֵ���ݷ�ʽ����ָ�������������ʱͬ����ѭ��һ���򡣲�����ͨ��ִ�е��ú������ı�ʵ��ָ�������ֵ�����ǿ��Ըı�ʵ��ָ�������ָ������ֵ��
*/
