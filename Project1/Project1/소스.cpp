#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;

	scanf("%d", &a);

	if (a >= 360)
	{
		printf("잘못된 값입니다.");
	}
	else if (a > 0 && a < 90)
	{
		printf("1사분면 입니다.");
	}
	else if (a > 90 && a < 180)
	{
		printf("2사분면 입니다.");
	}
	else if (a > 180 && a < 270)
	{
		printf("3사분면 입니다.");
	}
	else if (a > 270 && a < 360)
	{
		printf("4사분면 입니다.");
	}
	else if (a == 0)
	{
		printf("양의 x축 입니다");
	}
	else if (a == 90)
	{
		printf("양의 y축 입니다");
	}
	else if (a == 180)
	{
		printf("음의 x축 입니다");
	}
	else if (a == 270)
	{
		printf("음의 y축 입니다");
	}
	return 0;
}