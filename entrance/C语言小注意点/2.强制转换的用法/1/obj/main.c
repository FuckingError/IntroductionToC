#include <stdio.h>
#include <stdlib.h>
/*
  2016年12月1日22:22:05
*/
int main()
{
    int i;
    float sum = 0;

    for (i = 1; i <= 100;++i)
    {
        sum = sum + 1/(float)(i);
    }
    printf("sum = %f\n",sum);

    return 0;
}

/*
注意： 输入输出格式要一致

*/
