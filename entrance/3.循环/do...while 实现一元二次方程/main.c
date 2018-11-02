#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
  2016年12月20日15:25:20

  do while 的运用
*/
int main()
{

    double a , b , c;
    double delta;
    double x1 , x2;
    char ch;

   do
   {
    printf("请输入一元二次方程的三个系数：\n");
    printf("a = ");
    scanf("%lf", &a);

    printf("b = ");
    scanf("%lf", &b);

    printf("c = ");
    scanf("%lf", &c);

    delta = b*b -4*a*c;

    if (delta > 0)
    {
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("有两个解，x1 = %lf,x2 = %lf\n", x1, x2);
    }
    else if (0 == delta)
    {
        x1 = x2 = (-b) / (2*a);
        printf("有唯一的解，x1 = %lf, x2 = %lf\n", x1, x2);
    }
    else
    {
        printf("无解\n");
    }

    printf("您想继续吗（Y/N）:");
    scanf(" %c", &ch); // %c前面必须加一个空格
   }
   while ('y'==ch || 'Y'==ch);

    return 0;
}
/*
反思：1.输出double 用lf，不然会对输出值有影响
      2.do while 多用于人机交互

*/

