#include <stdio.h>
#pragma warning (disable : 4996)

int main(void) 
{
	int x;
	printf("������ �Է��ϼ���! \n");
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
		printf("���\n");

		if (x % 2 == 0) 
		{
			printf("¦�� \n");
		
		}
		
	}*/
	// ���� ����ϱ� + 31���� �Ѿ��� ���, �߸��� �Է��̶�� ��� 

	int range = 0; 
	if (x >= 1 && x <= 31) {
		range = 1;
	}
	x %= 7;

	if (range){

		if (x == 6 || x == 0){
			printf("������ �ָ��Դϴ�.");
			if (x == 6){
				printf("�׸��� ��ſ� ������Դϴ� ^0^");
			}

			if (x == 0){
				printf("������ �� ��ſ� �Ͽ����Դϴ� ��0��");
			}
			
		}
		//if (x >= 1 && x<= 5) //if ((!day == 6 || day == 0)) ��....! ���� ��ȣ ����ϴ� �͵� �߿�.
		else{
		
			printf("������ �����Դϴ�.");
		}
	}

	//if (!range) // if (!( x >= 1 && x <= 31))�� ����ص� �� ��.
	else{
	
		printf("�Է� �����Դϴ�.");
	}


}