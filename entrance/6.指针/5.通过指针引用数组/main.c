#include <stdio.h>
#include <stdlib.h>
/*
时间：2017年1月3日13:14:20
目的：通过指针引用数组元素
*/
int main()
{  /*
    下标法
    char a[10];
    int i;

    printf("please enter 10 integer numbers:");
    for(i = 0; i < 10; i++)
        //scanf("%d",&a[i]);
    putchar(getchar());

    /*for(i = 0; i < 10; i++)
        printf("%c",a[i]);
    printf("\n");

    return 0;
    */



/*地址法：
    int a[10];
    int i;

    printf("Please enter 10 integer numbers:");
    for(i = 0;i < 10;i++)
        scanf("%d",/*&a[i]*/ //(a+i)); a[i] (a+i)
    /*for(i = 0;i < 10;i++)
        printf("%d",*(a + i));
    printf("\n");

    return 0;
}*/

/*指针法：*/
    int a[10];
    int *p;

    printf("Please enter 10 integer numbers:");

    /*for(i = 0;i < 10;i++)
        scanf("%d",&a[i]);*/
    for(p = &a[0];p < (a+10);p++)//在数组里面for循环不需要再定义一个变量//a表示a[10]首元素的地址 等价于 p = &a[0]
        scanf("%d",p);//注意空格
    for(p = a;p < (a + 10);p++)
        printf("%d ",*p);//注意空格

    printf("\n");

    return 0;
}
