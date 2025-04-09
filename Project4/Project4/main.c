#include <stdio.h>
#include<stdlib.h>
#include<time.h> // 시스템 시간을 따라가는 것을 나타내는 듯한 것으로 보임...

int main(void) {

	/*srand(time(NULL));
	int dice = rand() % 6 + 1;
	
	printf("주사위 값 : %d\n", dice);

	double value = (double)rand() / (double)RAND_MAX; 

	printf("%f17.15f", value);*/

	////1. 숫자의 부호를 판단 ("양수", "음수", "0") 을 판별하는 판단식 (삼항 연산자를 아마 이용하는 듯) 
	//int a = 2;
	//printf("%s", a > 0 ? " 양수" : ( a < 0 ? "음수" : "0"));
	
	int num = 15;
	printf("%s\n", num > 0 ? "양수" : (num < 0 ? "음수" : "0"));


	
	// 2. 정수의 값을 기준으로 3의 배수이면서 5의 배수인지 판단 (풀었음)

	
	printf("%s\n", ((num % 3 == 0) && (num % 5 == 0)) ? "3의 배수이면서 5의 배수입니다." : "아닙니다.");



	//3. 정수 세개를 기준으로 최대값 출력 (대소 비교)

	//int c = 3;
	//int d = 15;
	//int e = 10;
	
	//printf("%d\n", c > d ? (c > e ? c : e) : (d > e ? d : e));
	
	int num1 = 10;
	int num2 = 30;
	int num3 = 20; 

	int max = (num1 > num2 ? num1 : num2);
	max = max > num3 ? max : num3;
	printf("최댓값 : %d\n", max);
	
	// 4. 두 개의 정수의 차이를 항상 양수로 표현 (unsigned int를 이용해서 풀 수 있는 방법은 없을까.?)
	//int f = 3;
	//int g = 10;
	//
	//printf("%d\n", f > g ? (f - g) : (g - f) );
	int result = num1 - num2; 

	printf("%d\n", result > 0 ? result : -result);


	// 5. 두 변수의 값을 교환 (?????) // 변수 4개?
	//int h = 8; // h 는 7로, i 는 3으로 바뀌어야 함.
	//int i = 15;
	//int sit = h ;
	//h = i;
	//i = sit;
	//printf("h : %d i : %d", h, i  );
	
	int tmp = num2;
	num2 = num1;
	num1 = tmp;
	printf("%d %d\n", num1, num2);
	return 0;
}
