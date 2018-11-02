#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int a[5] = {1,2,3,4,5};
    int b[5];

    for(i=0;i<5;++i)
    {
          b[i]=a[i];
          printf("%d",b[i]);
    }

    return 0;
}
