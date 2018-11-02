#include <stdio.h>
#include <stdlib.h>
/*
  2016年12月1日23:18:18
  目的：i++和++i的比较
*/
int main()
{
    int i=3;
    printf("%d\n",i++); // 先i=3输出，然后i=i+1 i=4
    printf("%d\n",++i); // i=4，先i=i+1，然后输出i=5
    return 0;
}
/*
注意：用printf 多次输出同一个变量，则该变量继续使用
*/
