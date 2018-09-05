/*
 * 编写一个将输入复制到输出的程序，
 * 并把:
 * 1. 其中的制表符替换为\t
 * 2. 回退符替换为\b，把反斜杠替换为\\
 */

#include<stdio.h>

int main(void)
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t' || c == '\b' || c == 92)
        {
            printf("\\%c", c);
        }
        else
        {
            putchar(c);
        }
    }
}
