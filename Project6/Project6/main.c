#include <stdio.h>
int main(void)
{
	//int score = 92; 
	//char grade;
	//// ����
	//// 90�̻� A, 80�̻� B, �������� F
	//// �̴� 90~100�� A, 80~89�� B, 0~79�� F�� �ǹ�
	//if (score >= 90){
	//	grade = 'A';
	//}
	//else {// 90�̸� �̶�� ��
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

	//printf("������ %c �Դϴ�", grade);
	//// �ִ밪 ���� if�� Ȱ���Ͽ�,
	//int a = 10, b = 30, c = 20;

	//int max = a; // ó�� ���� a ������ �ʱ�ȭ
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
		printf("���� i ���� %d ��������� ���� %d\n", i, sum);
		i++;
	}
	
	printf("1���� %d������ ���� = %d\n", n, sum);*/
	// ������ �ݺ����� ������� 1���� 100������ ¦���� ���� ���Ͻÿ�. 

	/*int i = 1, n = 100, sum = 0;
	
		while(i <= n) {
	
			if (i % 2 == 0) {
				sum += i;

			}
			i++;
	}
		printf("���� ���� = %d\n", sum);*/

	// ���빮�ڸ� ���� ��� �Ͻÿ�. ���...
		//int i = 65, n = 90;
		int i = 'A';
		while (i <= 'Z') {
			printf("%c",i);
			i++;
		}

}
