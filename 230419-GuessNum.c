// -*- coding:gb2312 -*-
/* -----
 * File:     d:\0-Document\Code\ncre-col2-c\230419-GuessNum.c
 * Project:  d:\0-document\code\ncre-col2-c
 * Created Date:  	2023-04-19 19:56:30
 * Last Modified:	2023-04-20 15:46:30
 * -----
 * Author:		ZhaoWentao
 * AutherEmail:	linyushu0513@qq.com
 * -----
 * Keep learning Keep thinking Keep searching
 * -----
 * DESCRIPTION:
 * 猜数
 * -----
 * HISTORY:
 * Date            	By 	Comments
 * ----------------	---	----------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int ans, guess = 0;
    int min = 0, max = 100;
    srand(time(0));
    ans = rand() % 101; // 产生0-100的随机数
    // printf("答案：%d\n\n", ans); // 测试后门，提示答案
    do
    {
        printf("请输入以下范围的数：[%d-%d]\n", min, max);
        scanf("%d", &guess);
        if (guess > 100 || guess < 0)
        {
            printf("超出范围！请注意提示！\n");
            continue;
        }
        if (guess > ans)
        {
            printf("太大了！\n");
            max = guess;
        }
        else if (guess < ans)
        {
            printf("太小了！\n");
            min = guess;
        }
        else
            printf("猜对了！\n");
    } while (guess != ans);
    return 0;
}