#include <stdio.h>
#pragma warning(disable: 4996)
int main(void) {

	//int age = 20;
	//float height = 173.5f, weight = 65.4f; 

	//printf("age : %d\n", age);
	//printf("height : %.1f\n", height);
	//printf("weight : %.1f\n", weight);
	//

	//int a = 5, b = 10;
	//int x = a + b;

	//printf("a + b - 1 = %d\n", x - 1);
	//printf("(a + b) * 2 = %d\n", x * 2);
	//printf("(a + b) + 5 = %d\n", x + 5);
	//
	//x = x * x; 
	//printf("x : %d\n", x);
	//
	//a = b = 30; // 30을 b에 대입하고 b 값을 a 값에 대입한다.
	//printf("a : %d, b : %d\n", a, b);
	//
	///*scanf("%d", &x);
	//printf("%d\n", x);*/

	//printf("숫자를 두 개 입력하면 더 해드립니다. 예시) 1, 5\n"); 
	//scanf("%d %d", &a, &b);
	//printf("결과 : %d\n", a + b);
	// 
	//국어, 영어, 수학 점수를 입력받고 총점과 평균을 계산하여 출력하는 코드 작성

	/*int kor, eng, mat, sum ; 
	float avg;

	printf("국어 점수를 기입하여 주세요.\n");
	scanf("%d", &kor);
	printf("영어 점수를 기입하여 주세요.\n");
	scanf("%d", &eng);
	printf("수학 점수를 기입하여 주세요.\n");
	scanf("%d", &mat);

	sum = kor + eng + mat;
	avg = sum / 3.f;

	printf("총점 : %d 평균 : %.3f", sum, avg);*/

	//산술

	/*int a = 10, b = 3;
	printf("a + b : %d\n", a + b);
	printf("a - b : %d\n", a - b);
	printf("a * b : %d\n", a * b);
	printf("a / b : %d\n", a / b);
	printf("a %% b : %d\n", a % b);*/

	//변수, 숫자, 입력, 출력, 산술을 활용한 연습문제 

	// 1. 세자리 숫자를 입력받아서 각각의 자릿수를 출력, 각각의 자릿수에 해당하는 숫자의 합, ex) 3, 4, 5면 3 + 4 + 5
	
	int a;
	printf("세자리 숫자를 입력하세요.\n");
	scanf("%d", &a);
	int hun = a / 100;
	int ten = (a % 100) / 10;
	int one = (a % 100) % 10;
	int sum = hun + ten + one;
	printf("백의 자리 : %d, 십의 자리 : %d, 일의 자리 : %d\n", hun, ten, one); 
	printf("각 자리의 합 : %d\n", sum);
	printf("\n");

	// 2. 초를 입력 받아서, 시, 분, 초 계산 ex) 5000을 입력하면 1시간 23분 20초 
	
	int time;
	printf("숫자를 시, 분, 초로 바꿔드립니다. 원하시는 숫자를 입력하세요.\n");
	scanf("%d",&time);
	int hou = (time / 3600);
	int min = (time % 3600) / 60;
	int sec = (time % 3600) % 60;
	printf("%d 시 %d 분 %d 초", hou, min, sec);

	/*int x; 
	
	printf("값을 입력해주세요.\n"); 
	scanf("%d", &x);
	printf("%s\n", x % 2 == 0 ? "even" : "odd");*/





















}