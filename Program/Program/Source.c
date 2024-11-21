#include <stdio.h>

void main()
{
#pragma region 주소 연산자
	//변수의 주소 값을 반환하는 연산자입니다.

	//데이터의 주소 값은 해당 데이터가 저장된 메모리
	//의 시작 주소를 의미하며, 메모리의 공간은 1byte

	//int i = 10;
	//
	//printf("i의 주소 : %p", i);
	//
	//
	//
#pragma endregion

#pragma region scanf함수
	//표준 입력 함수로, 여러 종류의 데이터를 다양한
	//서식에 맞추어 입력해주는 함수입니다.

	int score = 0;

	//표준 입력 함수는 입력을 수행할 때까지 다음
	//작업으로 넘어갈 수 없습니다.

	//scanf_s(" %d", &score);

	//버퍼는 데이터가 이동할 때 임시로 저장되는 공간이며,
	//서식 지정자에 따라 입력할 수 있는 데이터의 범위도 결정됩니다.
	//printf("score의 값" ,score);

	//표준 입력 함수로 데이터를 입력하게되면
	//버퍼에 데이터를 보관하였다가 입력하는 순간
	//버퍼 안의 내용을 프로그램에 전송합니다.

	printf("출력할 개수를 입력하시오");

	scanf_s(" %d", &score);

	for ( int i = 1; i <= score; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}


#pragma endregion


}