#include <stdio.h>
#include <stdlib.h>
/*
  ʱ�䣺2016��12��8��12:07:09

  Ŀ�ģ�
       1.��1��100����������
       2.��1��100������ƽ��ֵ
       3.��1��100������֮�ͣ�����1��100��ż��֮��

  ���ó���for if Ƕ��
            if else
*/

int main()
{
    int i;
    int sum1 = 0;
    int sum2 = 0;
    int cnt = 0;
    float avg;

    for (i = 1;i < 101;++i)
    {
        if (i%2 == 1)
        {
            sum1 = sum1 + i; // sum += i;
            ++cnt;
        }
        else
        {
            sum2 += i;
        }
    }

    //avg = 1.0*sum/cnt;// 1.0Ĭ��Ϊdouble

    printf("sum1 = %d\n",sum1);
    printf("sum2 = %d\n",sum2);

    printf("cnt = %d\n",cnt);
    //printf("avg = %f\n",avg);

    return 0;
}
/*
ע�⣺1.�Ⱥ� ==
      2. i%2 ������
      3.�Ⱥ�ǰ��ո�
      4.for����λ�������������������Ƿֺ�
      5.if����Ϊ��������
      6.for if ����Ϊ������{}
      7. sum += i ��ʾ sum = sum + i
      8.��23��ǿ��ת��
      9.������ӣ�
*/
