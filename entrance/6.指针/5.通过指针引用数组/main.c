#include <stdio.h>
#include <stdlib.h>
/*
ʱ�䣺2017��1��3��13:14:20
Ŀ�ģ�ͨ��ָ����������Ԫ��
*/
int main()
{  /*
    �±귨
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



/*��ַ����
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

/*ָ�뷨��*/
    int a[10];
    int *p;

    printf("Please enter 10 integer numbers:");

    /*for(i = 0;i < 10;i++)
        scanf("%d",&a[i]);*/
    for(p = &a[0];p < (a+10);p++)//����������forѭ������Ҫ�ٶ���һ������//a��ʾa[10]��Ԫ�صĵ�ַ �ȼ��� p = &a[0]
        scanf("%d",p);//ע��ո�
    for(p = a;p < (a + 10);p++)
        printf("%d ",*p);//ע��ո�

    printf("\n");

    return 0;
}
