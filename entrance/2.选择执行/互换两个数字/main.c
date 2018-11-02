#include <stdio.h>
#include <stdlib.h>
/*
 2016年11月24日13:11:52
 目的：互换两个数字
*/

int main()
{
    int x , y , z ;
    printf("请输入两个整数，用空格隔开\n");
    scanf("%d %d",&x,&y);

    //if(x>=y)
    //{
        z=x;
        x=y;
        y=z;
    //}

    /*else
    {
        z=y;
        y=x;
        x=z;
    }
    */
    printf("x=%d y=%d\n",x,y);
    return 0;
}
