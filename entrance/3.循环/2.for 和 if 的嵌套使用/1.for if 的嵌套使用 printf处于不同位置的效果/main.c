#include <stdio.h>
#include <stdlib.h>
/*
  2016年11月29日23:53:12

 目的：for 循环 i小于等于10的数且被3整除的和
       当printf处于不同位置时输出结果的变化
*/
/*int main()
{
    int i;
    int sum = 0;

    for (i = 0;i <= 10;++i)
    {
        if (i%3 == 0)
            sum = sum + i;
    }

    printf("%d\n",sum);

    return 0;
}
*/

/*
结果：18
注意： i <= 10 i%3 == 0
*/

int main()
{
    int i;
    int sum = 0;

    for (i = 0;i <= 10;++i)
    {
        if (i%3 == 0)
            sum += i;//sum = sum + i;

        printf("%d\n",sum);
    }
    return 0;
}

/*
结果：0
0
0
3
3
3
9
9
9
18
18

注意：想看懂C语言要先看懂流程
*/
