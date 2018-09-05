/*
 * 编写一个将输入复制到输出的程序，并将其中连续的多个空格用一个空格代替
 */

#include<stdio.h>

int main(void)
{
    int pre;
    int c;

    c = getchar();
    pre = 0;
    while (c != EOF)
    {
        if (!(c == 32 && pre == 32))
            putchar(c);

        pre = c;
        c = getchar();
    }
}
