// -*- coding:gb2312 -*-
/* -----
 * File:     d:\0-Document\Code\ncre-col2-c\01.c
 * Project:  d:\0-document\code\ncre-col2-c
 * Created Date:  	2023-05-17 19:33:40
 * Last Modified:	2023-05-17 19:40:59
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
    char s[80];
    int i;
    gets(s);
    if (s[0] == 'S' && s[1] == 'U' && s[2] == 'E' && s[3] == 'P')
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}