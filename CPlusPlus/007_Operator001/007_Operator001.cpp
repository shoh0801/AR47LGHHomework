#include <iostream>

int main()
{	
	int Left = 7;
	int Right = 3;
	int Result = 0;

	// 연산자에는 보통
	// 단항 연산자 <= 메모리영역이 1개만 필요하면 단항
	// 이항 연산자 <= 메모리영역이 1개만 필요하면 단항
 	// 삼항 연산자 <= 메모리영역이 1개만 필요하면 단항

	// ex) = 연산자는 이항 연산자 입니다
	// Left 3을 사용해서 2개의 메모리영역이 있어야만 동작하기 때문에 이항 연산자.


	// 사칙연산자는 보통 이항이 많습니다.
	Result = Left + Right;
	Result = Left - Right;
	Result = Left * Right;
	// c++ 에서 정수의 나누샘은 몫만 나온다.
	Result = Left / Right;
	Result = Left % Right;
	Result = -Left;
	Result = +Left;
	// 전치=전위
	Result = ++Left;
	// 후치=후위 
	Result = Left++;
	Result = --Left;
	Result = Left--;


	// bool이라는 자료형은 논리형이라고 부른다.
	// 논려형은 true와 false로 
	// 참과 거짓이라는 2가지만 표현할수 있는 자료형을 논리형이라고 한다.
	// true  논리형 상수 참
	// false 논리형 상수 거짓
	
	// 비교 연산자 / 관계 연산자
	bool bResult = true;

	bResult = Left == Right;	// 같다
	bResult = Left != Right;	// 다르다
	bResult = Left < Right;		// 작다
	bResult = Left > Right;		// 크다
	bResult = Left >= Right;	// 작거나 같다
	bResult = Left <= Right;	// 크거나 같다

	// 논리 연산자
	// and
	bResult = true && true;
	// 둘다 참이라면 참

	// or
	bResult = true || true;
	// 둘중 하나라도 참이라면 참
}
