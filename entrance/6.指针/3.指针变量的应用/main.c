#include <stdio.h>
#include <stdlib.h>
/*
2017��1��2��19:14:16
*/
int main()
{
    int *p1, *p2, *p, a, b;

    printf("please enter two integer numbers:\n");
    scanf("%d,%d",&a,&b);

    p1 = &a;
    p2 = &b;

    if(a < b)
    {
       /*
        p = p1;
        p1 = p2;
        p2 = p;
        */
        p1 = &b;//����ֱ�Ӹ�p1��p2����ֵ
        p2 = &a;
    }

    printf("a = %d,b = %d\n",a,b);
    printf("max = %d,min = %d\n",*p1,*p2);

    return 0;
}
/*
��˼��
1.scanf("%d,%d"&a,&b)
����ʱע������ʱҪ��Ӣ�����뷨��, �����ǣ�
2.��ָ����������������֣������Ĳ������֣��������ֵĵ�ַ
*/
