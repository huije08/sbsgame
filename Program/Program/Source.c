#include <stdio.h>

void function()
{
	printf("Function...\n");
}

void position(int x, int y)
{
	printf("x의 값 : %d\n", x);
	printf("y의 값 : %d\n", y);
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
#pragma region 함수
	// 하나의 특별한 목적의 작업을 수행하기 위해
	// 독립적으로 설계된 코드의 집합입니다.

	//function();
	//function();
	//function();
	
	//함수의 경우 자료형과 반환하는 값의 형태가 
	// 일치하지 않으면 원하는 값을 얻을 수 없습니다.

#pragma endregion

#pragma region 매개 변수
	// 함수의 정의에서 전달받은 인수를 함구 내부로
	// 전달하기 위해 사용하는 변수입니다.

	//position(5, 5);

	// 대게 변수는 함수 내부에서만 연산이 이루어지며,
	// 함수가 종료되면 메모리에서 사라집니다.

	//printf("Compare 함수의 값 :%d\n", Compare(5.75f, 8.125f));

	//하나의 함수에 서로 다른 자료형의 매게 변수를 
	// 함께 정의할 수 있으며, 여러개의 매개 변수를 
	// 생성하여 사용할 수 있습니다

#pragma endregion

#pragma region 인수

	int a = 10;
	int b = 20;


	printf("a = %d\n", a);
	printf("b = %d\n", b);

	// 함수가 호출될 때 매개 변수의 수에 따라
	// 전달할 수 있는 인수의 수가 결정되며, 값을 전달하는
	// 인수와 값을 전달받는 매개 변수의

#pragma endregion


}