#include <stdio.h>
#include <stdlib.h>
/*
2017��1��2��21:09:18
*/
int main()
{
    int max(float x,float y);

    float a, b;
    float c;// int c

    scanf("%f,%f",&a,&b);

    c = max(a,b);

    printf("max is %f\n",c);// %d

    return 0;
}
int max(float x,float y)
{
    float z;
    z= x>y ? x:y;
    return(z);
}
/*
��˼��������ǰ������������
*/
