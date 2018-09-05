/*
 * 编写一个统计空格、制表符与换行符个数的程序
 */

#include<stdio.h>

int main(void)
{
    int space_count;
    int tab_count;
    int newline_count;

    space_count = 0;
    tab_count = 0;
    newline_count = 0;

    int c;
    while((c = getchar()) != EOF)
    {
        if (c == 32)
        {
            space_count++;
        }
        else if (c == '\n')
        {
            newline_count++;
        }
        else if (c == '\t')
        {
            tab_count++;
        }
    }

    printf("space count: %d\nnew line count: %d\ntab count: %d", space_count, newline_count, tab_count);
}
