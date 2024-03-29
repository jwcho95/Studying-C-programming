// <혼자 공부하는 C언어> 챕터 2-1

// 1. main 함수의 활용
/*작성자 : 조재완
  제목 : 10과 20을 더하는 프로그램*/

/*int main(void)
{
	10 + 20;
	//실행코드
	return 0; // 함수의 종료를 알린다.
}*/


/* #include <stdio.h>
int main(void)
{
	printf("Be happy!");
	printf("My friend.");

	return 0;
}*/
// 결과를 보면 이 두 문장은 서로 연속되어서 나온다. 그 이유는 개행 문자가 없기 때문이다. 파이썬과는 다르게 개행 문자를 집어 넣어주어야한다.

// 2. 제어 문자를 사용한 출력
/*#include <stdio.h>

int main(void)
{
	printf("Be happy!\n");
	printf("12345678901234567890\n");
	printf("My\tfriend\n");	// 파이썬과 마찬가지로 문자열 내에 \t를 삽입하여서 띄어쓰기를 할 수 있다.
	printf("Goot\bd\tchance\n"); // \b는 backspace를 한 후에 새로운 단어로 수정할 수 있게 도와준다.
	printf("Cow!\rW\a\n"); // \r은 carriage return 즉, 맨 앞으로 이동하여 수정을 할 수 있게 한다. \a는 벨소리를 내는 기능이다. \b와 \r의 기능을 보아 컴퓨터는 기본적으로 삽입이 아닌 수정의 기능을 사용하는 것으로 보인다.
}*/

// 3. 정수와 실수의 출력
/* #include <stdio.h>

int main(void)
{
	printf("%d\n", 10);
	printf("%lf\n", 3.4);
	printf("%.1lf\n", 3.45);
	printf("%.10lf\n", 3.4);

	printf("%d 와 %d의 합은 %d입니다.\n", 10, 20, 10 + 20);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);
	
	return 0;
} */


// <혼자 공부하는 C언어> 챕터 2-2

// 세 가지 진법의 정수 상수 (10진수, 8진수, 16진수)
/* #include <stdio.h>

int main(void)
{
	printf("%d\n", 12);
	printf("%d\n", 014);
	printf("%d\n", 0xc); // 10진수, 8진수, 16진수를 10진수로 표현한 것이다.

	printf("\n");

	printf("%o\n", 12);
	printf("%x\n", 12);
	printf("%X\n", 12); // 10진수를 각각 8진수, 16진수로 표현하도록 한 것이다. X를 대문자로 쓰면 16진수에서 대문자로 출력된다.
	
	return 0;
} */

// 정규화 표기법 : 소수점 앞에 0이 아닌 유효 숫자 한 자리를 사용하여 지수형태로 변화 시킨 것. ex) 3.14e-5, 5.69e7
/* #include <stdio.h>

int main(void)
{
	printf("%.1lf\n", 1e6); // 1 * 10^6을 소수점 이하 한 자리까지만 출력하라는 뜻
	printf("%.7lf\n", 3.14e-5); // 3.14 * 10^(-5)을 소수점 이하 7번째 자리까지만 출력하라는 뜻
	printf("%le\n", 0.0000314); // 소수점 형태의 실수를 지수 형태로 출력하라는 뜻
	printf("%.2le\n", 0.0000314); // 소수점 형태의 실수를 지수 형태로 소수점 이하 2번째 자리까지만 출력하라는 뜻
} */

// 문자와 문자열 데이터의 출력
/* #include <stdio.h>

int main(void)
{
	printf("%c\n", 'A');
	printf("%s\n", "A");
	printf("%c은 %s입니다.\n", '1', "first"); // %c는 변환 문자를, 문자열은 변환 문자 없이도 바로 출력할 수 있으나 %s를 사용한다.

	return 0;
} */

/* 
정수와 문자는 크기가 4바이트이다. 실수는 8바이트로 이루어져 있다. 그래서 10과 10.0은 다르다.
1바이트는 8비트로 이루어져 있다. 10은 32비트, 10.0은 64비트로 이루어져 있다.
정수를 컴파일하면 4바이트 크기의 2진수로 변환되면서 컴퓨터가 작동한다.
1바이트로 표현할 수 있는 값의 범위는 0 ~ 255이다.

n비트 => 0 ~ 2^n - 1
1바이트(8비트) => 0 ~ 2^8 - 1
4바이트(32비트) => 0 ~ 2^32 - 1

음수는 보수를 이용해서 표현할 수 있다.
1. -10의 경우, 먼저 절댓값으로 변환 후 2진수로 표현한다.

-10 => 10 = 00000000 00000000 00000000 00001010

2. 2진수의 0과 1을 바꾼다. (1의 보수라 표현한다.)

00000000 00000000 00000000 00001010 => 11111111 11111111 11111111 11110101

3. 그리고 그 2진수에 1을 더한다.

11111111 11111111 11111111 11110110

이렇게 되면 -10과 10의 2진수를 더하면 결과값이 0이 된다.
*/
