#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int * p;
    int i = 5;

    *p = i;//*pû�г�ʼ�����Ǹ�����ֵ
    printf("%d\n",*p);
    return 0;
}
*/


int main()
{
    int i = 5;
    int * p;
    int * q;

     p = &i;
     //*q = p;//����㣺��ֵʹ*q�����ͱ��������  *qû�г�ʼ��
     p = q;//����㣺qû�г�ʼ��
     printf("%d\n",*q);//*q��������ڴ浥Ԫ�Ŀ���Ȩ�޲�û�з�������������Իᱨ��

     return 0;
}

