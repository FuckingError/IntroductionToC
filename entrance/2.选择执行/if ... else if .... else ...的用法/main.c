#include <stdio.h>
#include <stdlib.h>
/*
  2016��11��24��12:45:34
*/
int main()
{
    int delta ;
    printf("������һ����\n");
    scanf("%d",&delta);

    if (delta > 0)
        printf("�������⣡\n");
    else if (delta == 0)
        printf("��һ���⣡\n");
    else
        printf("�޽�!\n");

    return 0;
}
