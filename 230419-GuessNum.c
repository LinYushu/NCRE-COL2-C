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
 * ����
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
    ans = rand() % 101; // ����0-100�������
    // printf("�𰸣�%d\n\n", ans); // ���Ժ��ţ���ʾ��
    do
    {
        printf("���������·�Χ������[%d-%d]\n", min, max);
        scanf("%d", &guess);
        if (guess > 100 || guess < 0)
        {
            printf("������Χ����ע����ʾ��\n");
            continue;
        }
        if (guess > ans)
        {
            printf("̫���ˣ�\n");
            max = guess;
        }
        else if (guess < ans)
        {
            printf("̫С�ˣ�\n");
            min = guess;
        }
        else
            printf("�¶��ˣ�\n");
    } while (guess != ans);
    return 0;
}