#include <stdio.h>
#include <stdlib.h>
/*
  2016年11月24日12:45:34
*/
int main()
{
    int delta ;
    printf("请输入一个数\n");
    scanf("%d",&delta);

    if (delta > 0)
        printf("有两个解！\n");
    else if (delta == 0)
        printf("有一个解！\n");
    else
        printf("无解!\n");

    return 0;
}
