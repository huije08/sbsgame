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
	// 표준 입력 함수로, 여러 종류의 데이터를 다양한
	// 서식에 맞추어 입력해주는 함수입니다.

	// int score = 0;

	// 표준 입력 함수는 입력을 수행할 때까지 다음
	// 작업으로 넘어갈 수 없습니다.

	// scanf_s(" %d", &score);

	// 버퍼는 데이터가 이동할 때 임시로 저장되는 공간이며,
	// 서식 지정자에 따라 입력할 수 있는 데이터의 범위도 결정됩니다.
	// printf("score의 값" ,score);

	// 표준 입력 함수로 데이터를 입력하게되면
	// 버퍼에 데이터를 보관하였다가 입력하는 순간
	// 버퍼 안의 내용을 프로그램에 전송합니다.




#pragma endregion

#pragma region star

	// int input = 0;
	// 
	// printf("출력할 개수를 입력하시오");
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

#pragma region 포인터
	// 메모리의 주소 값을 저장할 수 있는 변수 입니다.

	//int x = 10;
	//
	//int* pointer = &x;
	//
	//*pointer = 99;
	//
	//printf("x의 변수의 값 : %d\n", x);
	//printf("x의 주소값 : %p\n", &x);
	//printf("pointer 변수의 값 : %p\n", pointer);
	//printf("pointer 변수의 주소값 : %p\n", &pointer);

	//포인터 변수도 자신의 메모리 공간을 가지고 있으며,
	// 포인터 변수에 변수의 주소르르 저장하게되면 해당
	// 변수의 시작주소를 가리키게 됩니다

	//float health = 100.0f;
	//
	//pointer = &health;
	//
	//*pointer = 15.5f;
	//
	//printf("health 변수의 값 : %f\n", health);

	//포인터 변수를 저장하기 위해 주소 값을 저장할 변수의
	//자료형과 포인터 변수의자료형이 일치해야 합니다.

	//printf("포인터 변수의 크기 : %d\n", sizeof(pointer));

	//포인터 변수으 크기는 중앙처리 장치가 한번에 처리할 수 있는


#pragma endregion

#pragma region 범용 포인터
	// 자료형이 정해지지 않은 상태로 모든 자료형을 
	// 저장할 수 있는 포인터 입니다.

	//void* p = NULL;

	// 범용 포인터는 메모리 주소에 접근해서 값을
	// 변경할 수 없습니다.


	//char alphabet = 'A';
	//
	//int integer = 10;
	//
	//float decimal = 5.5f;
	//
	//p = &alphabet;

	// 범용 포인터로 변수의 메모리에 접근하려면
	// 범용 포인터가 가리키는 변수의 자료형으로
	//  형변환을 해주어야 합니다.

	//*(char*)p = 'B';
	//
	//p = &integer;
	//
	//*(int*)p = 15;
	//
	//p = &decimal;
	//
	//*(float*)p = 3.25f;
	//
	//printf("alphabet 변수의 값 : %c\n", alphabet);
	//printf("integer 변수의 값 : %c\n", integer);
	//printf("decimal 변수의 값 : %c\n", decimal);

#pragma endregion

#pragma region 상수 지시 포인터

//int VectorX = 10;
//int VectorY = 20;
//
//const int* ptr = &VectorX;
//
//printf("ptr 변수가 가리키는 값 : %d\n", *ptr);

//*ptr = 99;

//ptr = &VectorY;

//printf("ptr 변수가 가리키는 값 : %d\n", *ptr);

// 상수 지시 포인터를 선언하게 되면 포인터 변수가 
// 가리키고 있는 주소에 존재하는 값을 변경할 수 
// 없도록 설정할 수 있습니다.

#pragma endregion

#pragma region 포인터 상수

//int positionX = 5;
//int positionY = 0;
//
//int* const reference = &positionX;
//
//&reference = 10;

//int * const reference

//포인터 상수는 해당 변수의 값을 변경할 수 있지만,
//다른 메모리 주소를 저장할 수 없습니다.
#pragma endregion

}