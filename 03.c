// -*- coding:gb2312 -*-
/* -----
 * File:     d:\0-Document\Code\ncre-col2-c\03.c
 * Project:  d:\0-document\code\ncre-col2-c
 * Created Date:  	2023-05-18 12:30:54
 * Last Modified:	2023-05-19 12:38:39
 * -----
 * Author:		ZhaoWentao
 * AutherEmail:	linyushu0513@qq.com
 * -----
 * Keep learning Keep thinking Keep searching
 * -----
 * DESCRIPTION:
 *
 * -----
 * HISTORY:
 * Date            	By 	Comments
 * ----------------	---	----------------
 */
#include <stdio.h>
#include <string.h>
void fun(char s[]);
int main()
{
    char s[80];
    int i;
    int move = 3;
    printf("Please input the code:\n");
    gets(s);
    for (i = 0; i < strlen(s); i++)
    {
        s[i] = ((s[i] - 'A') + move) % 26 + 'A';
    }
    printf("After jiemi\n");
    puts(s);
    printf("\n");
    fun(s);
    return 0;
}
void fun(char s[])
{
    int i = 0, flag = 1;
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] != 'L')
            continue;
        else if (s[i + 1] == 'O' && s[i + 2] == 'V' && s[i + 3] == 'E')
        {
            printf("Yes\n");
            flag = 0;
            break;
        }
        else
            continue;
    }
    if (flag)
        printf("No\n");
}