#include <stdio.h>
#include <stdlib.h>
/*
  ʱ�䣺2016��12��8��17:53:47
  Ŀ�ģ������Լ�
*/
int main()
{
    int i , j , k , m;

    i = j = 3;
    k = i++;
    m = ++j;

    printf("i = %d,j = %d,k = %d,m = %d\n",i,j,k,m);
    return 0;
}

/*
  �����i = 4,j = 4,k = 3,m = 4
  ���ۣ�ǰ����������ʽ��ֵ�Ǽ�1���ֵ
        ������������ʽ��ֵ�Ǽ�1ǰ��ֵ
*/
