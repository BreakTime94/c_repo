#include <stdio.h>
#pragma warning(disable : 4996)

int main(void) 
{
	// ���ڸ� �ϳ� �Է¹޾� �� ���� ������ ���� ���� Ȯ��
	// var, scanf 

	/*char ch;
	printf("���ڸ� �ϳ� �Է��ϼ���. >");
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
	printf("���� �� ���� ���� �������� �Է����ּ���.");
	scanf("%d %d %d", &a, &b, &c);
	float avg = (float)(a + b + c) / 3.f;
	printf("%f", avg);


	// long int (8byte) : (- 2^63) ~ (2^63 -1) 
	//double type (8byte) : �ּҰ� ������ 0�� ����� ���� -> 5e-320 5*(10^-320) ~ 1.6e308 (1.6*(10^308))


	return 0;
}