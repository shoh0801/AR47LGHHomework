#include <iostream>

int main()
{
	int	Left = 0b00000000000000000000000000000010;
	int	Right = 0b00000000000000000000000000000001;
	int	Result = 0b00000000000000000000000000000000;

		
	// 비트단위 연산자
	// not
	// -1
	Result = ~0;
	// and
	// 0
	Result = Left & Right;
	// or
	// 3
	Result = Left | Right;
	// xor // 둘이 다를때 true
	// 둘이 1로 같든 0으로 같든 같으면 false가 된다.
	Result = 3 ^ 3;

	// true와 false 참과 거짓의 명확한 의미
	// 특정 메모리 영역의 비트가 전부 0이라면 false 와 거짓
	// 특정 메모리 영역의 비트중 단 1개라도 1이 있다면 true 와 참

	Result = 1 << 33;

	

}
