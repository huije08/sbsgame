#include <stdio.h>

void function()
{
	printf("Function...\n");
}

void position(int x, int y)
{
	printf("x�� �� : %d\n", x);
	printf("y�� �� : %d\n", y);
}

int Compare(float x, float y)
{
	if (x < y)
	{
		return 1;
	}
	else if (x == y)
	{
		return 0;
	}
	else if (x > y)
	{
		return -1;
	}
}

void Swap(int left, int right)
{
	int temporary = left;
	left = right;
	right = temporary;

}


void main()
{
#pragma region �Լ�
	// �ϳ��� Ư���� ������ �۾��� �����ϱ� ����
	// ���������� ����� �ڵ��� �����Դϴ�.

	//function();
	//function();
	//function();
	
	//�Լ��� ��� �ڷ����� ��ȯ�ϴ� ���� ���°� 
	// ��ġ���� ������ ���ϴ� ���� ���� �� �����ϴ�.

#pragma endregion

#pragma region �Ű� ����
	// �Լ��� ���ǿ��� ���޹��� �μ��� �Ա� ���η�
	// �����ϱ� ���� ����ϴ� �����Դϴ�.

	//position(5, 5);

	// ��� ������ �Լ� ���ο����� ������ �̷������,
	// �Լ��� ����Ǹ� �޸𸮿��� ������ϴ�.

	//printf("Compare �Լ��� �� :%d\n", Compare(5.75f, 8.125f));

	//�ϳ��� �Լ��� ���� �ٸ� �ڷ����� �Ű� ������ 
	// �Բ� ������ �� ������, �������� �Ű� ������ 
	// �����Ͽ� ����� �� �ֽ��ϴ�

#pragma endregion

#pragma region �μ�

	int a = 10;
	int b = 20;


	printf("a = %d\n", a);
	printf("b = %d\n", b);

	// �Լ��� ȣ��� �� �Ű� ������ ���� ����
	// ������ �� �ִ� �μ��� ���� �����Ǹ�, ���� �����ϴ�
	// �μ��� ���� ���޹޴� �Ű� ������

#pragma endregion


}