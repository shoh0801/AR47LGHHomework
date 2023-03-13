#include <iostream>

int main()
{
	// 삼항 연산자
	// a ? b : cc

	// 참혹은 거짓 ? 참일때 메모리 : 거짓일때 메모리
	int Left = 7;
	int Right = 3;
	int Result = 0;

	Result = (Left != Right) ? 100 :200;

	// sizeof연산자 단항 연산자
	// ()안에 있는 메모리영역의 바이트 크기를 리턴한다.
	// sizeof(메모리영역)
	Result = sizeof(Left);
	Result = sizeof(int);
	Result = sizeof(bool);
}
