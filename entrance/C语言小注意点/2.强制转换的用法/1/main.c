#include <stdio.h>
#include <stdlib.h>
/*
  2016��12��1��22:22:05
  Ŀ��:ǿ��ת�����÷�
*/
int main()
{
    int i;
    float sum = 0;

    for (i = 1; i <= 100;++i)
    {
        //sum = sum + 1/(float)(i); //1/iʼ��δ����  ǿ��ת��  ת����ʽҪ������ ����Ҫ����һ������ǰ
        sum = sum + 1.0/i; //����Ҳ����
        //���� sum = sum + (float)(1/i);
    }
    printf("sum = %f\n",sum);

    return 0;
}


/*
ע�⣺ ���������ʽҪһ��

*/
