#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//정수의 제곱을 계산하기 위한 함수 예제
#include <stdio.h> 
int square (int n);

int main(void)
{
	int result;
	result = square(5);
	printf("%d", result);
}

int square(int n)
{
	return (n*n);
}
