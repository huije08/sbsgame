#include <stdio.h>

void main()
{
#pragma region �迭
	//���� �ڷ����� ������� �̷���� ���� �����Դϴ�.

	//int array[3];
	//
	//array[0] = 10;
	//array[1] = 20;
	//array[2] = 30;

	// ������ ���ϴ� ���ҿ� ���ϴ� ���� ������ �� ������,
	// �迭�� ũ��� �������� �Ǵ� �������� ������ �޸�
	// ������ ������ �˴ϴ�.

	// printf("array �ڷ����� ũ�� : %u\n", sizeof(array));
	// 
	// sizeof(array) ?? -> 3
	// int szie = sizeof(array) / sizeof(int)
	// 
	// for (int i = 0; i < 3; i++)
	// {
	// 	printf("array[%d] = %d\n", i, array[i]);
	// }

	//�迭�� ��� ù ��° ���Ҵ� 0���� �����մϴ�.

	// float list[] = { 1.25f, 2.75f, 3.575f, 4.895f };
	// 
	// for (int i = 0; i < 4; i++)
	// {
	// 	printf("list[%d] = %f\n", i, list[i]);
	// }

	// �迭�� ũ��� ������ �� ������, �ʱ�ȭ ��Ͽ��� 
	// ������ ��ҿ� ���� �迭�� ũ�Ⱑ �����˴ϴ�.

	// �迭�� �������� �޸� ������ ������, �迭�� �̸���
	// ������ ���� �ּҸ� ����ŵ�ϴ�.

	// float* pointer = list;
	// 
	// pointer = pointer + 2;
	// 
	// *pointer = 7.875f;
	// 
	// printf("list[2] = %f\n", list[2]);
	// 
	// printf("pointer�� �� = %p\n", pointer;
	// printf("list[2]�� �ּ� = %o\n", list[2]);

#pragma endregion

#pragma region ���ڿ�
	//�������� �޸� ������  ����� ���� ������ 
	//�����Դϴ�.

	//const char* string = "Queue";

	//printf("string ������ �� : %s\n", string);

	//string = "Stack";

	//printf("string ������ �� : %s\n", string);

	//���ڿ��� ��� �����͸� �̿��Ͽ� ���ڿ� ����� ����Ű���� �� �� ������,
	// ���ڿ� ����� ������ ������ �б� ���� ������ ����� ������ ���ڿ�
	// �� ���� ������ �� �����ϴ�

	//char word[] = ("Darkness");

	//printf("strinf ������ ũ�� : %d\n", sizeof(string));

	//���ڿ��� ���鵵 �Բ� �޸� ������ �����Ͽ� ũ�Ⱑ 
	// �����Ǹ�, �������� ���ڿ��� ���� �˷��ִ� ����
	// ���ڰ� �߰��˴ϴ� (NULL)

	//word[4] = "\0";
	//
	//printf("word �迭�� �� : %s\n", word);

	//���ڿ��� ��� ���� �������� �޸� �������� ����Ǿ�
	// ������, ���� �迭 ���̿� ��ȿ�� ���ڸ� �ְ� �Ǹ� 
	// ��ȿ�� ���ڱ����� Ǯ���մϴ�.
#pragma endregion

#pragma region ASCII �ڵ�
	//�̱� ANSI ���� ǥ��ȭ�� ���� ��ȯ�� 7bit ��ȣ ü���Դϴ�.

	char alphabet = 'A';

	for (int i = 0; i < 26; i++)
	{
		printf("%c\n", alphabet+i);
	}
	
#pragma endregion

}