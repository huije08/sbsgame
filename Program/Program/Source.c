#include <stdio.h>

void main()
{
#pragma region �ּ� ������
	//������ �ּ� ���� ��ȯ�ϴ� �������Դϴ�.

	//�������� �ּ� ���� �ش� �����Ͱ� ����� �޸�
	//�� ���� �ּҸ� �ǹ��ϸ�, �޸��� ������ 1byte

	//int i = 10;
	//
	//printf("i�� �ּ� : %p", i);
	//
	//
	//
#pragma endregion

#pragma region scanf�Լ�
	// ǥ�� �Է� �Լ���, ���� ������ �����͸� �پ���
	// ���Ŀ� ���߾� �Է����ִ� �Լ��Դϴ�.
	   
	// int score = 0;
	   
	// ǥ�� �Է� �Լ��� �Է��� ������ ������ ����
	// �۾����� �Ѿ �� �����ϴ�.
	   
	// scanf_s(" %d", &score);
	   
	// ���۴� �����Ͱ� �̵��� �� �ӽ÷� ����Ǵ� �����̸�,
	// ���� �����ڿ� ���� �Է��� �� �ִ� �������� ������ �����˴ϴ�.
	// printf("score�� ��" ,score);
	   
	// ǥ�� �Է� �Լ��� �����͸� �Է��ϰԵǸ�
	// ���ۿ� �����͸� �����Ͽ��ٰ� �Է��ϴ� ����
	// ���� ���� ������ ���α׷��� �����մϴ�.
	  
	


#pragma endregion

#pragma region star

	// int input = 0;
	// 
	// printf("����� ������ �Է��Ͻÿ�");
	// 
	// scanf_s(" %d", &input);
	// 
	// for (int i = 1; i <= input; i++)
	// {
	// 	for (int j = 1; j <= i; j++)
	// 	{
	// 		printf("*");
	// 	}
	// 	printf("\n");
	// }

#pragma endregion


#pragma region ������
	// �޸��� �ּ� ���� ������ �� �ִ� ���� �Դϴ�.

	int x = 10;

	int* pointer = &x;

	*pointer = 99;

	printf("x�� ������ �� : %d\n", x);
	printf("x�� �ּҰ� : %p\n", &x);
	printf("pointer ������ �� : %p\n", pointer);
	printf("pointer ������ �ּҰ� : %p\n", &pointer);

	//������ ������ �ڽ��� �޸� ������ ������ ������,
	// ������ ������ ������ �ּҸ��� �����ϰԵǸ� �ش�
	// ������ �����ּҸ� ����Ű�� �˴ϴ�

	float health = 100.0f;

	pointer = &health;

	*pointer = 15.5f;

	printf("health ������ �� : %f\n", health);

	//������ ������ �����ϱ� ���� �ּ� ���� ������ ������
	//�ڷ����� ������ �������ڷ����� ��ġ�ؾ� �մϴ�.
	
	printf("������ ������ ũ�� : %d\n", sizeof(pointer));

	//������ ������ ũ��� �߾�ó�� ��ġ�� �ѹ��� ó���� �� �ִ�
	

#pragma endregion

#pragma region ���� ������
	// �ڷ����� �������� ���� ���·� ��� �ڷ����� 
	// ������ �� �ִ� ������ �Դϴ�.

	void* p = NULL;

	// ���� �����ʹ� �޸� �ּҿ� �����ؼ� ����
	// ������ �� �����ϴ�.


	char character = 'A';

	int integer = 10;

	float decimal = 5.5f;

	p = &character;

	*(char*)p = 'B';

	p = &integer;

#pragma endregion

}