#include <stdio.h>
#include <stdlib.h>
/*
  时间：2016年12月8日17:53:47
  目的：自增自减
*/
int main()
{
    int i , j , k , m;

    i = j = 3;
    k = i++;
    m = ++j;

    printf("i = %d,j = %d,k = %d,m = %d\n",i,j,k,m);
    return 0;
}

/*
  结果：i = 4,j = 4,k = 3,m = 4
  结论：前自增整体表达式的值是加1后的值
        后自增整体表达式的值是加1前的值
*/
