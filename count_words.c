/*
 * 统计输入的字符数
 */
#include<stdio.h>

int main(void)
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;

    printf("%ld\n", nc);
}
