#include <stdio.h>

int count;

int stage = 1;



void Increase()
{
	static int score = 0;

	score++;

	printf("score : %d\n", score);
}

void Clear()
{
	stage += 1;
}

void main()
{
#pragma region �޸�

#pragma region CODE ����
	//���μ����� ������ �ڵ�� ��ũ�� �����
	//���� ���·� ����Ǵ� �����Դϴ�.
#pragma endregion

#pragma region DATA ����
	// ���� ������ ���� ������ ����Ǵ� �����Դϴ�.

#pragma endregion

#pragma region BSS ����
	// �ʱ�ȭ ���� ���� ���� ������
	// ����Ǵ� �����Դϴ�.
#pragma endregion

#pragma region STACK ����
	// �Լ��� ȣ��� ����Ǵ� ����������
	// �Ű� ������ ����Ǵ� �����Դϴ�.
#pragma endregion

#pragma region HEAP ����
	// ����ڰ� ���� �Ҵ��ϴ� �޸� �����Դϴ�.
#pragma endregion

#pragma endregion

#pragma region ���� ����
	// �Լ� ���ο� ����� ������, �Լ� ���ο����� ��� �����ϸ�,
	// { }�� ����� ������ �޸𸮰� �����Ǵ� Ư¡�������� �ִ� �����Դϴ�.

	// int x = 10;
	// 
	// {
	// 	int x 0= 20;
	// }
	// 
	// printf("%d", x);

#pragma endregion

#pragma region ���� ����
	// ���α׷��� ��𿡼� ���� ������ �����ϸ�, ���α׷��� ����� ��
	// �޸𸮿��� �����ǰ�, ���α׷��� ����Ǿ�߸� �޸𸮿��� �������
	// Ư¡�� ������ �ִ� �����Դϴ�.

	//Clear();
	//Clear();
	//Clear();
	//
	//printf("stage �� �� : %d", stage);
#pragma endregion

#pragma region ���� ����
	// ���� ������ ������ ������ Ư���� ������ ������, ���α׷��� ����� �� �� �ѹ���
	// �ʱ�ȭ�� �̷������, ���α׷��� ����� �� �޸𸮿� �����ǰ� ���α׷��� ����
	// �Ǿ�߸� �޸𸮿��� �����Ǵ� Ư¡�� ������ �ִ� �����Դϴ�.

	//Increase();
	//Increase();
	//Increase();

#pragma endregion


}