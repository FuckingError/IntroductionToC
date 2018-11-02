#include <stdio.h>
#include <stdlib.h>
/*
  2016年11月24日12:59:07
*/
int main()
{
    float score;

    printf("请输入您的考试成绩");
    scanf("%f",&score);

    if (score > 100)
        printf("呵呵!\n");
    else if (score>=90 && score<=100)//不能写成90<=score<=100
        printf("优秀!\n");
    else
        printf("太差！");

    return 0;
}
/*
心得：定义数据时，如果要求数据为整数和小数，则定义浮点型变量
*/
