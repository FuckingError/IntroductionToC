#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int * p;
    int i = 5;

    *p = i;//*p没有初始化，是个垃圾值
    printf("%d\n",*p);
    return 0;
}
*/


int main()
{
    int i = 5;
    int * p;
    int * q;

     p = &i;
     //*q = p;//错误点：赋值使*q从整型变成无整型  *q没有初始化
     p = q;//错误点：q没有初始化
     printf("%d\n",*q);//*q所代表的内存单元的控制权限并没有分配给本程序，所以会报错

     return 0;
}

