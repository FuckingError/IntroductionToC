#include <stdio.h>
#include <stdlib.h>
/*
  2016年12月1日22:22:05
  目的:强制转换的用法
*/
int main()
{
    int i;
    float sum = 0;

    for (i = 1; i <= 100;++i)
    {
        //sum = sum + 1/(float)(i); //1/i始终未整型  强制转换  转换格式要加括弧 必须要是在一个变量前
        sum = sum + 1.0/i; //这样也可以
        //不能 sum = sum + (float)(1/i);
    }
    printf("sum = %f\n",sum);

    return 0;
}


/*
注意： 输入输出格式要一致

*/
