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
	//a = b = 30; // 30�� b�� �����ϰ� b ���� a ���� �����Ѵ�.
	//printf("a : %d, b : %d\n", a, b);
	//
	///*scanf("%d", &x);
	//printf("%d\n", x);*/

	//printf("���ڸ� �� �� �Է��ϸ� �� �ص帳�ϴ�. ����) 1, 5\n"); 
	//scanf("%d %d", &a, &b);
	//printf("��� : %d\n", a + b);
	// 
	//����, ����, ���� ������ �Է¹ް� ������ ����� ����Ͽ� ����ϴ� �ڵ� �ۼ�

	/*int kor, eng, mat, sum ; 
	float avg;

	printf("���� ������ �����Ͽ� �ּ���.\n");
	scanf("%d", &kor);
	printf("���� ������ �����Ͽ� �ּ���.\n");
	scanf("%d", &eng);
	printf("���� ������ �����Ͽ� �ּ���.\n");
	scanf("%d", &mat);

	sum = kor + eng + mat;
	avg = sum / 3.f;

	printf("���� : %d ��� : %.3f", sum, avg);*/

	//���

	/*int a = 10, b = 3;
	printf("a + b : %d\n", a + b);
	printf("a - b : %d\n", a - b);
	printf("a * b : %d\n", a * b);
	printf("a / b : %d\n", a / b);
	printf("a %% b : %d\n", a % b);*/

	//����, ����, �Է�, ���, ����� Ȱ���� �������� 

	// 1. ���ڸ� ���ڸ� �Է¹޾Ƽ� ������ �ڸ����� ���, ������ �ڸ����� �ش��ϴ� ������ ��, ex) 3, 4, 5�� 3 + 4 + 5
	
	int a;
	printf("���ڸ� ���ڸ� �Է��ϼ���.\n");
	scanf("%d", &a);
	int hun = a / 100;
	int ten = (a % 100) / 10;
	int one = (a % 100) % 10;
	int sum = hun + ten + one;
	printf("���� �ڸ� : %d, ���� �ڸ� : %d, ���� �ڸ� : %d\n", hun, ten, one); 
	printf("�� �ڸ��� �� : %d\n", sum);
	printf("\n");

	// 2. �ʸ� �Է� �޾Ƽ�, ��, ��, �� ��� ex) 5000�� �Է��ϸ� 1�ð� 23�� 20�� 
	
	int time;
	printf("���ڸ� ��, ��, �ʷ� �ٲ�帳�ϴ�. ���Ͻô� ���ڸ� �Է��ϼ���.\n");
	scanf("%d",&time);
	int hou = (time / 3600);
	int min = (time % 3600) / 60;
	int sec = (time % 3600) % 60;
	printf("%d �� %d �� %d ��", hou, min, sec);

	/*int x; 
	
	printf("���� �Է����ּ���.\n"); 
	scanf("%d", &x);
	printf("%s\n", x % 2 == 0 ? "even" : "odd");*/





















}