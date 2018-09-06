/*
 *编写一个程序，以每行一个单词的形式打印其输入
 */

#include<stdio.h>

#define IN 1 /* 在单词内 */
#define OUT 2 /* 在单词外 */

int main(void)
{
    int nw, state, c;

    nw = 0;
    state = OUT;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (state == IN)
            {
                putchar('\n');
            }
            state = OUT;
        }
        else
        {
            putchar(c);
            state = IN;
        }
    }
}
