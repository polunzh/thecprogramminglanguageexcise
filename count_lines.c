/*
 * 统计输入的行数
 */

#include<stdio.h>

int main(void)
{
    int c;
    int n;

    n = 0;

    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++n;

    printf("%d", n);
}
