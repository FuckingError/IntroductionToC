#include <stdio.h>
#include <stdlib.h>
/*
 2016��11��24��13:11:52
 Ŀ�ģ�������������
*/

int main()
{
    int x , y , z ;
    printf("�����������������ÿո����\n");
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
