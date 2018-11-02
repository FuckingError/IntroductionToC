#include <stdio.h>
#include <stdlib.h>
/*
  2016年11月29日23:22:48
  目的：sum的简单应用： 求和
*/

int main()
{
    int i;
    int sum=0;

    for (i=1;i<=10;++i)
        sum = sum + i;

    printf("%d\n",sum);

    return 0;
}

/*
  注意： 1.代码规范化 （空格  语句换行）
         2.for循环 for后面不加分号
         3.for语句括号内用分号隔开
*/
