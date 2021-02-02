#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "game.h"

void menu()
{
	printf("********************\n");
	printf("*****��������Ϸ*****\n");
	printf("******�����룺******\n");
	printf("**1.start  0.quit:**\n");
	printf("********************\n");
}
 
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	init_board(board, ROW, COL);//��ʼ��
	into_board(board, ROW, COL);//��ӡ
	while (1)
	{
		player_move(board,ROW,COL);
		into_board(board, ROW, COL);//��ӡ
		ret = is_win(board, ROW, COL);//�ж����Ƿ�Ӯ
		if (ret != 'C')
		{
			break;
		}
		computer_move(board, ROW, COL);
		into_board(board, ROW, COL);//��ӡ
		ret = is_win(board, ROW, COL);//�жϵ����Ƿ�Ӯ
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}


void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
        scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������������һ��\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}