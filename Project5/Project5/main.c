#include <stdio.h>
#pragma warning (disable : 4996)

int main(void) 
{
	int x;
	printf("정수를 입력하세요! \n");
	scanf("%d", &x);
	
	/*if (x > 0)
	
		printf("positive1\n");
		printf("positive2\n");
		printf("positive3\n");
	
	printf("always!\n");*/

	/*if (x % 3 == 0)
	{
		printf("%d = %d * %d\n", x, 3, x / 3);
	}
	if (x % 5 == 0)
	{
		printf("%d = %d * %d\n", x, 5, x / 5);
	}
	if (x % 7 == 0)
	{
		printf("%d = %d * %d\n", x, 7, x / 7);
	}*/
	
	/*if (x > 0)
	{
		printf("양수\n");

		if (x % 2 == 0) 
		{
			printf("짝수 \n");
		
		}
		
	}*/
	// 요일 출력하기 + 31일을 넘었을 경우, 잘못된 입력이라고 출력 

	int range = 0; 
	if (x >= 1 && x <= 31) {
		range = 1;
	}
	x %= 7;

	if (range){

		if (x == 6 || x == 0){
			printf("오늘은 주말입니다.");
			if (x == 6){
				printf("그리고 즐거운 토요일입니다 ^0^");
			}

			if (x == 0){
				printf("하지만 덜 즐거운 일요일입니다 ㅠ0ㅠ");
			}
			
		}
		//if (x >= 1 && x<= 5) //if ((!day == 6 || day == 0)) 와....! 부정 기호 사용하는 것도 중요.
		else{
		
			printf("오늘은 주중입니다.");
		}
	}

	//if (!range) // if (!( x >= 1 && x <= 31))로 사용해도 될 듯.
	else{
	
		printf("입력 오류입니다.");
	}


}