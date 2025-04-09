#include <stdio.h>
#pragma warning(disable : 4996)

int main(void) 
{
	// 글자를 하나 입력받아 그 값이 영문자 인지 여부 확인
	// var, scanf 

	/*char ch;
	printf("글자를 하나 입력하세요. >");
	scanf("%c",& ch);*/
	
	// 1 + 3 * 2 ==> 1 + (3 * 2) ==> 1 + (6) ==> 7

	//printf("%c", &ch);
	/*printf("%c\n", ch);
	printf("%d\n", ch);
	printf("%d\n", 'A');*/
	//printf("%d", (ch >= 'A'&& ch<='Z') || (ch >= 'a' && ch <= 'z'));
	
	//printf("%c", 5 > 10 ? 'A' : 'B');
	
	int x = 10;
	x += 5;
	x += 5;
	x %= 7;
	printf(" x : %d ", x );
	

	int a, b, c; 
	printf("숫자 세 개를 공백 구분으로 입력해주세요.");
	scanf("%d %d %d", &a, &b, &c);
	float avg = (float)(a + b + c) / 3.f;
	printf("%f", avg);


	// long int (8byte) : (- 2^63) ~ (2^63 -1) 
	//double type (8byte) : 최소값 기준은 0과 가까운 기준 -> 5e-320 5*(10^-320) ~ 1.6e308 (1.6*(10^308))


	return 0;
}