#include <stdio.h>
#include <stdlib.h>
/*主函数：函数声明
          函数调用
*/
int main()
{
    void print_star();//函数声明
    void print_message();

    print_star();//函数调用
    print_message();
    print_star();

    return 0;
}

//其他函数
void print_star()
{
    printf("************\n");
}

void print_message()
{
    printf("How do you do!\n");
}
