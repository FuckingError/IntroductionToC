#include <stdio.h>
#include <stdlib.h>
/*
  时间：2016年12月8日12:07:09

  目的：
       1.求1到100的奇数个数
       2.求1到100的奇数平均值
       3.求1到100的奇数之和，再求1到100的偶数之和

  所用程序：for if 嵌套
            if else
*/

int main()
{
    int i;
    int sum1 = 0;
    int sum2 = 0;
    int cnt = 0;
    float avg;

    for (i = 1;i < 101;++i)
    {
        if (i%2 == 1)
        {
            sum1 = sum1 + i; // sum += i;
            ++cnt;
        }
        else
        {
            sum2 += i;
        }
    }

    //avg = 1.0*sum/cnt;// 1.0默认为double

    printf("sum1 = %d\n",sum1);
    printf("sum2 = %d\n",sum2);

    printf("cnt = %d\n",cnt);
    //printf("avg = %f\n",avg);

    return 0;
}
/*
注意：1.等号 ==
      2. i%2 求余数
      3.等号前后空格
      4.for后面位括弧（），括弧里面是分号
      5.if后面为括弧（）
      6.for if 下面为大括弧{}
      7. sum += i 表示 sum = sum + i
      8.第23行强制转化
      9.语句后面加；
*/
