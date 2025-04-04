#include <stdio.h>

int main(void)
{
	printf("int : %d\n", 1);
	printf("char : %d\n", 'A');
	printf("print integer : %d\n", 127);
	printf("%d + %d = %d\n", 5, 7, 5+7);

	printf("int %d, float %f, char %c, string %s\n", 1, 1.f, '1', "1");

	//이름, 국어점수, 영어점수, 수학점수, 총점, 평균
	printf("이름    국어    영어    수학    총점    평균\n");
	printf("==========================================================\n");
	printf("%s    %d    %d    %d    %d    %.3f\n", "김길동", 80, 90, 80, 80 + 90 + 80, (80 + 90 + 80) / (3.0f));
	printf("%10s%s\n", "hello","world");//첫번째 s 형식지정자는 총 10칸을 오른쪽부터 확보해서 출력하겠다
	printf("%-10s%s\n", "hello","world");// 첫번째 s 형식지정자는 총 10칸을 왼쪽부터 확보해서 출력하겠다.
	printf("%10.2s%s%\n", "hello", "wolrd"); // 출력값 앞에 8칸 빈칸 heworld로 출력

	printf("lead zero test: %d\n", 3); // 출력값 3
	printf("lead zero test: %3d\n", 3); // 출력값 __3
	printf("lead zero test: %03d\n", 3); // 출력값 003

	printf("abcde12345\r123\n");

	printf("쌍따옴표 표현 : \" ");
	printf("홑따옴표 표현 : \' ");
	printf("역슬래시 표현 : \\ \n");

	printf("현재 작업중인 폴더 이름은 C:\\Users\\TJ\\source\\repos\\Project1\\Project1\n");

	printf("int의 크기 : %d\n", sizeof(int)); //byte 가 전부 생략되어 있음
	printf("float의 크기 : %d\n", sizeof(float));
	printf("char의 크기 : %d\n", sizeof(char));

	/*printf("Hello, World!");
	printf("Hi, TJ");
	
	printf("\n");
	printf("%f, %f, %d, %f, %f", 1.0, -0.100, 2, .51234512345, -.100f);

	printf("\n");
	printf("%+015+.5f", 4.1325f);*/
	//int a = 10;
	//printf(a);
	
	return 0; 
}


// 주석 단축키 ctrl + / : 한 줄 주석, 2번 누르면 다시 해제
// shift + 방향키 : 범위 선택
// ctrl + F5 : run without debug
// ctrl + S : save
//  

// 주석 메모
// ()
// {}
// []

/*
	범위 주석 
	긴 장문의 글을 사용하는 용 
*/  