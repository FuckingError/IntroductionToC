#include <stdio.h>
#include <stdlib.h>
/*
  2016��11��24��12:59:07
*/
int main()
{
    float score;

    printf("���������Ŀ��Գɼ�");
    scanf("%f",&score);

    if (score > 100)
        printf("�Ǻ�!\n");
    else if (score>=90 && score<=100)//����д��90<=score<=100
        printf("����!\n");
    else
        printf("̫�");

    return 0;
}
/*
�ĵã���������ʱ�����Ҫ������Ϊ������С�������帡���ͱ���
*/
