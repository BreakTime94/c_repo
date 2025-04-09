#include <stdio.h>
int main(void)
{
	//int score = 92; 
	//char grade;
	//// 조건
	//// 90이상 A, 80이상 B, 나머지는 F
	//// 이는 90~100이 A, 80~89는 B, 0~79는 F를 의미
	//if (score >= 90){
	//	grade = 'A';
	//}
	//else {// 90미만 이라는 뜻
	//	
	//	if (score >= 80){
	//		grade = 'B';
	//	}
	//	else {
	//		grade = 'C';
	//	}
	//}
	//if (score < 80) {
	//	grade = 'F';
	//}

	//printf("학점은 %c 입니다", grade);
	//// 최대값 문제 if를 활용하여,
	//int a = 10, b = 30, c = 20;

	//int max = a; // 처음 값을 a 값으로 초기화
	//
	//if (max < b) {
	//	max = b;
	//}
	//if (max < c) {
	//	max = c;
	//}
	/*int i = 1, n, sum = 0;
	
	n = 100; 

	while (i <= n) {

		sum += i;
		printf("현재 i 값은 %d 현재까지의 합은 %d\n", i, sum);
		i++;
	}
	
	printf("1부터 %d까지의 합은 = %d\n", n, sum);*/
	// 현재의 반복문을 기반으로 1부터 100까지의 짝수의 합을 구하시오. 

	/*int i = 1, n = 100, sum = 0;
	
		while(i <= n) {
	
			if (i % 2 == 0) {
				sum += i;

			}
			i++;
	}
		printf("수의 합은 = %d\n", sum);*/

	// 영대문자를 가로 출력 하시오. 어렵...
		//int i = 65, n = 90;
		int i = 'A';
		while (i <= 'Z') {
			printf("%c",i);
			i++;
		}

}
