#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;

	scanf("%d", &a);

	if (a >= 360)
	{
		printf("�߸��� ���Դϴ�.");
	}
	else if (a > 0 && a < 90)
	{
		printf("1��и� �Դϴ�.");
	}
	else if (a > 90 && a < 180)
	{
		printf("2��и� �Դϴ�.");
	}
	else if (a > 180 && a < 270)
	{
		printf("3��и� �Դϴ�.");
	}
	else if (a > 270 && a < 360)
	{
		printf("4��и� �Դϴ�.");
	}
	else if (a == 0)
	{
		printf("���� x�� �Դϴ�");
	}
	else if (a == 90)
	{
		printf("���� y�� �Դϴ�");
	}
	else if (a == 180)
	{
		printf("���� x�� �Դϴ�");
	}
	else if (a == 270)
	{
		printf("���� y�� �Դϴ�");
	}
	return 0;
}