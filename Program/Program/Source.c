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

void Swap(int * left, int * right)
{
	int temporary = *left;

	*left = *right;

	*right = temporary;
}

inline void Process(float progress)
{
	//printf("Progress : %f\n" progress);

	// �ζ��� �Լ��� ������ ������ Ȯ��Ǹ�, ������
	// �� �ζ��� �Լ��� �����ϴ��� ��Ȳ������
	// �Ϲ��Լ��� ��ȯ�˴ϴ�
}

void Recursive(int count)
{
	printf("Recursive function\n");

	if (count > 0)
	{
		Recursive(count - 1);
	}
	else
	{
		return;
	}
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

	//int a = 10;
	//int b = 20;
	//
	//Swap(&a, &b);
	//
	//printf("a = %d\n", a);
	//printf("b = %d\n", b);

	// �Լ��� ȣ��� �� �Ű� ������ ���� ����
	// ������ �� �ִ� �μ��� ���� �����Ǹ�, ���� �����ϴ�
	// �μ��� ���� ���޹޴� �Ű� ������

#pragma endregion

#pragma region �ζ��� �Լ�
	// �Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ����
	// �Լ��� �ڵ带 �����Ͽ� �����ϴ� ����� �Լ��Դϴ�.

	//Process(46.7f);

	// �ζ��� �Լ��� �Լ��� ȣ���ϴ� ������ �����Ƿ� 
	// ��������, �ζ��� �Լ��� ���� ����ϰ� �Ǹ� �Լ��� �ڵ尡
	// 
#pragma endregion

#pragma region ��� �Լ�
	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾���
	// �����ϴ� �Լ��Դϴ�.
	//Recursive(3);

#pragma endregion

}