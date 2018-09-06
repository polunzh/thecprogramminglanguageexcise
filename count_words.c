/*
 * 统计输入的单词个数、行数、字符数
 */

#include<stdio.h>

#define IN 1 /* 在单词内 */
#define OUT 0 /* 在单词外 */

int main(void)
{
    int nw, nc, nl, c, state;

    nw = nc = nl = 0;
    state = OUT;

    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;

        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }

    printf("nw: %d, nc:%d, nl:%d", nw, nc, nl);
}
