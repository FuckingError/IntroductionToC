#include <stdio.h>
#include <stdlib.h>
/*
  2016��11��29��23:53:12

 Ŀ�ģ�for ѭ�� iС�ڵ���10�����ұ�3�����ĺ�
       ��printf���ڲ�ͬλ��ʱ�������ı仯
*/
/*int main()
{
    int i;
    int sum = 0;

    for (i = 0;i <= 10;++i)
    {
        if (i%3 == 0)
            sum = sum + i;
    }

    printf("%d\n",sum);

    return 0;
}
*/

/*
�����18
ע�⣺ i <= 10 i%3 == 0
*/

int main()
{
    int i;
    int sum = 0;

    for (i = 0;i <= 10;++i)
    {
        if (i%3 == 0)
            sum += i;//sum = sum + i;

        printf("%d\n",sum);
    }
    return 0;
}

/*
�����0
0
0
3
3
3
9
9
9
18
18

ע�⣺�뿴��C����Ҫ�ȿ�������
*/
