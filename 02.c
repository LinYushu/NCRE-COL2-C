// -*- coding:gb2312 -*-
/* -----
 * File:     d:\0-Document\Code\ncre-col2-c\02.c
 * Project:  d:\0-document\code\ncre-col2-c
 * Created Date:  	2023-05-17 19:41:06
 * Last Modified:	2023-05-17 19:51:17
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
int main()
{
    int i = 0, flag = 1;
    char s[80];
    gets(s);
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] != 'S')
            continue;
        else if (s[i + 1] == 'U' && s[i + 2] == 'E' && s[i + 3] == 'P')
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
    return 0;
}