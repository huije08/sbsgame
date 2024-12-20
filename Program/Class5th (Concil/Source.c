#include <stdio.h>


#pragma region 전처리기
//프로그램이 컴파일 되기 이전에 프로그램에 대한 
// 사전 처리 하는 과정입니다.

//전처리기는 컴파일러가 아닌 선행처리기에 의해서
// 처리되는 문장이기 떄문에 
#pragma endregion

void main()
{
#pragma region 실수를 저장하는 방법

#pragma region 고정 소수점
	// 소수점의 위치를 고정하여 소수점의 위치를
	// 나타내는 방법입니다.

	//고정 소수점은 정수부와 소수부의 크기가 작으므로
	// 표현할수있는
#pragma endregion

#pragma region 부동소수점
	// 소수점의 위치를 고정하지 않고 소수점의 위치를
	// 나타내는 방법입니다.

	// 가수부에 있는 비트 중에서 가장 왼쪽에 있는 수는
	// 표현하지 않습니다
#pragma endregion

#pragma region 실수 형태의 (10)진수를 (2)진수로 변환하는 과정
	// 10진수 실수 부분을 1,0이 될떄까지 계속 2로 곱한
	// 다음 곱한 결과의 정수 부분을 위에서 아래로 순서대로
	// 정렬합니다.

	//float packet = 3.125f;
	//float pi = 3.14159265f;
	//
	//printf("packet 변수의 값 : %f\n", packet);
	//printf("pi 변수의 값 : %f\n", pi);

	// 표준 출력 함수로 소수를 출력할 때 4byte 크기의
	//실수형 자료형은 소수점 이하 6자리 까지만 표기하며, 
	// 8byte 크기의 실수형 자료형은 소수점 이하 15자리 까지만 표기됩니다

#pragma endregion

#pragma endregion

#pragma region 조건문
	// 어떤 조건이 주어질 떄 해당 조건에 따라
	// 동작을 수행하도록 실행하는 명령문 입니다.

#pragma region 관계연산자
	// 두 개의 피연산자의 값을 비교하여 그 결과를
	// 0 또는 1 이라는 값으로 나타내는 연산자입니다.

	//int data1 = 10 > 5;
	//int data2 = 10 < 5;
	//int data3 = 10 >= 5;
	//int data4 = 10 >= 5;
	//int data5 = 10 == 5;
	//int data6 = 10 != 5;
	//
	//printf("data1의 값 : %d\n", data1);
	//printf("data2의 값 : %d\n", data2);
	//printf("data3의 값 : %d\n", data3);
	//printf("data4의 값 : %d\n", data4);
	//printf("data5의 값 : %d\n", data5);
	//printf("data6의 값 : %d\n", data6);

	//관계 연산자는 조건이 맞을떄 1이라는 값을 변환되며,


#pragma endregion

#pragma region if문
	//어떤 특정한 조건을 비교하여 조건이 맞다면
	//실행되는 명령어 입니다.


#pragma endregion

#pragma region else if문
	// if 문의 조건이 틀릴때 else if 문의 조건이
	// 맞다면 실행되는 명령문 입니다,

	//char grade = 'B';
	//
	//if (grade == 'A')
	//{
	//	printf("100점입니다");
	//}
	//else if
	//else if 문은 여러개를 형성하는것이 가능하며, 
	//if문이 존재하지 않으면 사용할 수 없습니다.
#pragma endregion

#pragma region else문
	// if 문과 else if문의 조건이 다 틀리면
	// 실행되는 명령문 입니다.

	//int value = 0;
	//
	//if (value > 0)
	//{
	//	printf("value 값은 양수입니다.");
	//}
	//else if (value < 0)
	//{
	//	printf("value 값은 음수입니다.");
	//}
	//else
	//{
	//	printf("value 값은 음수도 양수도 아닙니다.\n");
	//}


	//if문에 연결된 모든 조건문의 조건이 맞을 때
	//가장위에 있는 조건문만 실행됩니다.
#pragma endregion

#pragma region switch문
	//어떤 결과에 따라 그 결과부터 실행되는 명령문 입니다.

	//int secen = 1;
#pragma region break문
	//  특정한 지점에서 분기를 탈출하는 제어문 입니다.

#pragma endregion

	//char Key = 'w';
	//
	//switch (Key)
	//{
	//	// switch문은 해당 조건이 완료되었을 때, break
	//	// 문이 없으면 나머지 밑에있는 case 문 까지
	//	// 계속 실행시키다가 종료합니다.
	//case 'w': printf("↑");
	//	break;
	//case 'a': printf("←");
	//	break;
	//case 's': printf("↓");
	//	break;
	//case 'd': printf("→");
	//	break;
	//default: printf("Exception");
	//	break;
	//}


#pragma endregion

#pragma region 논리연산자

#pragma region AND연산자
	//int level = 99;
	//int exp = 10000;
	//
	//if (level >= 99 && exp >= 5000)
	//{
	//	printf("전직을 할 수 있습니다/\n");
	//}
#pragma endregion

#pragma region OR 연산자

//int questA = 10;
//int questB = 0;
//
//if (questA >= 10 || questB >= 10)
//{
//	printf("퀘스트 클리어\n");
//}

#pragma endregion

#pragma region NOT 연산자
//
//int state = 0;
//
//if (!state)
//{
//	printf("Game start");
//}
#pragma endregion


#pragma endregion


}