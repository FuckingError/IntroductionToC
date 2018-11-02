#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , y;

    scanf ("%d %d",&x,&y);

    if (x>y)
        printf("x>y\n");
    else
        printf("x<y\n");

    return 0;
}
/*
注意：1.scanf的双引号内最好只有控制符，用空格隔开
      2.if 和 else后面都要加引号
      3.不同语句间最好换行
*/
