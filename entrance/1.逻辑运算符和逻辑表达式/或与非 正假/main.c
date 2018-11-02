/*
2016年11月22日23:32:33
检验或与非中赋值的真假
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{   int i = 10;
    int k = 20;
    int m;

    m = (3>2)&&(k=8);
    printf("m=%d,k=%d\n",m,k);
    return 0;
}
/*
结果：
m=1,k=8

结论：
赋值为非零，结果为真，且运算结果为所赋的值
赋值为0，结果为假


*/

