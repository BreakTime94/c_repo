#include <stdio.h>
#include<stdlib.h>
#include<time.h> // �ý��� �ð��� ���󰡴� ���� ��Ÿ���� ���� ������ ����...

int main(void) {

	/*srand(time(NULL));
	int dice = rand() % 6 + 1;
	
	printf("�ֻ��� �� : %d\n", dice);

	double value = (double)rand() / (double)RAND_MAX; 

	printf("%f17.15f", value);*/

	////1. ������ ��ȣ�� �Ǵ� ("���", "����", "0") �� �Ǻ��ϴ� �Ǵܽ� (���� �����ڸ� �Ƹ� �̿��ϴ� ��) 
	//int a = 2;
	//printf("%s", a > 0 ? " ���" : ( a < 0 ? "����" : "0"));
	
	int num = 15;
	printf("%s\n", num > 0 ? "���" : (num < 0 ? "����" : "0"));


	
	// 2. ������ ���� �������� 3�� ����̸鼭 5�� ������� �Ǵ� (Ǯ����)

	
	printf("%s\n", ((num % 3 == 0) && (num % 5 == 0)) ? "3�� ����̸鼭 5�� ����Դϴ�." : "�ƴմϴ�.");



	//3. ���� ������ �������� �ִ밪 ��� (��� ��)

	//int c = 3;
	//int d = 15;
	//int e = 10;
	
	//printf("%d\n", c > d ? (c > e ? c : e) : (d > e ? d : e));
	
	int num1 = 10;
	int num2 = 30;
	int num3 = 20; 

	int max = (num1 > num2 ? num1 : num2);
	max = max > num3 ? max : num3;
	printf("�ִ� : %d\n", max);
	
	// 4. �� ���� ������ ���̸� �׻� ����� ǥ�� (unsigned int�� �̿��ؼ� Ǯ �� �ִ� ����� ������.?)
	//int f = 3;
	//int g = 10;
	//
	//printf("%d\n", f > g ? (f - g) : (g - f) );
	int result = num1 - num2; 

	printf("%d\n", result > 0 ? result : -result);


	// 5. �� ������ ���� ��ȯ (?????) // ���� 4��?
	//int h = 8; // h �� 7��, i �� 3���� �ٲ��� ��.
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
