#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "game.h"

void menu()
{
	printf("********************\n");
	printf("*****三子棋游戏*****\n");
	printf("******请输入：******\n");
	printf("**1.start  0.quit:**\n");
	printf("********************\n");
}
 
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	init_board(board, ROW, COL);//初始化
	into_board(board, ROW, COL);//打印
	while (1)
	{
		player_move(board,ROW,COL);
		into_board(board, ROW, COL);//打印
		ret = is_win(board, ROW, COL);//判断人是否赢
		if (ret != 'C')
		{
			break;
		}
		computer_move(board, ROW, COL);
		into_board(board, ROW, COL);//打印
		ret = is_win(board, ROW, COL);//判断电脑是否赢
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}


void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
        scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请再试一次\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}