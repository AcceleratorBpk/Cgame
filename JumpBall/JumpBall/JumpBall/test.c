// 在坐标(x,y)处输出一个小球
#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
void main()
{
	int i, j;
	int x = 0;
	int y = 5;
	int velocity_x = 1;
	int velocity_y = 1;
	int top = 0;
	int bottom = 10;
	int left = 0;
	int right = 20;

// 输出小球上面的空行
	while (1)
	{
		

		x = x + velocity_x;
		y = y + velocity_y;
		system("cls");
		//清屏函数
		for (i = 0; i < x; i++)
			printf("\n");
		// 输出小球左边的空格
		for (j = 0; j < y; j++)
			printf(" ");
		printf("o");  // 输出小球o
		printf("\n");
		Sleep(50);  // 等待若干毫秒
		if ((x == top)||(x==bottom))
			velocity_x = -velocity_x;
		if ((y == left) || (y == right))
			velocity_y = -velocity_y;
		
	}
	system("pause");
}